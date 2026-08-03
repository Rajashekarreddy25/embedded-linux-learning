#!/bin/bash

# Load configuration
source "$(dirname "$0")/config.sh"
source "$(dirname "$0")/scripts/timer.sh"
source "$(dirname "$0")/scripts/logger.sh"
source "$(dirname "$0")/scripts/git_ops.sh"

# PID of the currently running debounce timer
TIMER_PID=""

# Repository state
DIRTY=0



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
