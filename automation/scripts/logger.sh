log_message()
{
    local message="$1"

    echo "$message"
    echo "$message" >> "$LOG_FILE"
}
