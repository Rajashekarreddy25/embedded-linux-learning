#!/bin/bash

acquire_lock()
{
    if [ -f "$LOCK_FILE" ]
    then
        OLD_PID=$(cat "$LOCK_FILE")

        if kill -0 "$OLD_PID" 2>/dev/null
        then
            echo "Watcher already running (PID: $OLD_PID)"
            exit 1
        else
            echo "Removing stale lock..."
            rm -f "$LOCK_FILE"
        fi
    fi

    echo $$ > "$LOCK_FILE"

    echo "Lock acquired (PID: $$)"
}

release_lock()
{
    rm -f "$LOCK_FILE"

    echo "Lock released"
}
