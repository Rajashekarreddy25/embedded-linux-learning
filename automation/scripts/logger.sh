log_message()
{
    local message="$1"
    local timestamp

    timestamp=$(date '+%Y-%m-%d %H:%M:%S')

    echo "[$timestamp] $message"

    echo "[$timestamp] $message" >> "$LOG_FILE"
}
