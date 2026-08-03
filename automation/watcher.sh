#!/bin/bash

# Load configuration
source "$(dirname "$0")/config.sh"

# PID of the currently running debounce timer
TIMER_PID=""

# Repository state
DIRTY=0


log_message()
{
    local message="$1"

    echo "$message"

    echo "$message" >> "$LOG_FILE"
}

log_message "Watcher Started"

is_ignored()
{
    local filepath="$1"

    if [[ "$filepath" =~ $IGNORE_REGEX ]]
    then
        return 0
    else
        return 1
    fi
}

mark_dirty()
{
    if [ "$DIRTY" -eq 0 ]
    then
        DIRTY=1
        echo "Repository State : DIRTY"
    fi
}

commit_repo()
{
    echo
    echo "=================================="
    echo "COMMIT SHOULD HAPPEN NOW"
    echo "=================================="

    DIRTY=0

    echo "Repository State : CLEAN"
}

timer_expired()
{
    if [ "$DIRTY" -eq 1 ]
    then
        commit_repo
    fi
}


start_timer()
{
    # Kill previous timer if it exists
    if [ -n "$TIMER_PID" ]
    then
        kill "$TIMER_PID" 2>/dev/null
	echo "old timer stopped."
    fi

    (
        sleep "$TIMEOUT"
        timer_expired
    ) &

    TIMER_PID=$!


    echo "New timer started (PID : $TIMER_PID)"
}

while IFS='|' read -r path event file
do
    filepath="${path}${file}"

    echo "--------------------------------"
    echo "PATH      : $path"
    echo "EVENT     : $event"
    echo "FILE      : $file"
    echo "FULL PATH : $filepath"

    if is_ignored "$filepath"
    then
        echo "IGNORED"
        continue
    fi

    log_message "$event : $filepath"

    mark_dirty

    start_timer

    echo "Repository State : DIRTY"

done < <(
    inotifywait -m -r \
    -e modify \
    -e create \
    -e delete \
    -e moved_to \
    -e moved_from \
    --format '%w|%e|%f' \
    "$WATCH_DIR"
)
