mark_dirty()
{
    if [ "$DIRTY" -eq 0 ]
    then
        DIRTY=1
        echo "Repository State : DIRTY"
    fi
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

