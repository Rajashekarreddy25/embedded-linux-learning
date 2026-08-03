#!/bin/bash

# Root directory to monitor
WATCH_DIR="$HOME/learning"

# Debounce timeout (seconds)
TIMEOUT=30

# Log file
LOG_FILE="$HOME/learning/automation/logs/watcher.log"

# Ignore patterns
IGNORE_REGEX="(\.git|\.vscode|automation/logs|a\.out$|\.o$|\.swp$|\.tmp$)"
