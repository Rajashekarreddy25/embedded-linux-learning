#!/bin/bash

LOG_FILE="$HOME/learning/ci/logs/build.log"

log_info()
{
    local message="$1"

    echo "[INFO]  $message"

    echo "[$(date '+%F %T')] [INFO]  $message" >> "$LOG_FILE"
}

log_error()
{
    local message="$1"

    echo "[ERROR] $message"

    echo "[$(date '+%F %T')] [ERROR] $message" >> "$LOG_FILE"
}

log_success()
{
    local message="$1"

    echo "[PASS]  $message"

    echo "[$(date '+%F %T')] [PASS]  $message" >> "$LOG_FILE"
}

clear_log()
{
    > "$LOG_FILE"
}
