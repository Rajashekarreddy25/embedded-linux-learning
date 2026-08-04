#!/bin/bash

#!/bin/bash

echo "=============================="
echo "LOGGER LOADED"
echo "SCRIPT_DIR=$SCRIPT_DIR"
echo "BASH_SOURCE=${BASH_SOURCE[0]}"
echo "PWD=$(pwd)"
echo "=============================="


#LOG_FILE="$HOME/learning/ci/logs/build.log"
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CI_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"

mkdir -p "$CI_DIR/logs"

LOG_FILE="$CI_DIR/logs/build.log"


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
    echo "LOG_FILE=$LOG_FILE"
}
