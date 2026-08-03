#!/bin/bash

# Root directory to monitor

WATCH_ROOT="$HOME/learning"

WATCH_DIRS=(
    "$WATCH_ROOT/C"
    "$WATCH_ROOT/KERNEL"
    "$WATCH_ROOT/LSP"
)

# Debounce timeout (seconds)
TIMEOUT=30

# Log file
LOG_FILE="$HOME/learning/automation/logs/watcher.log"
LOCK_FILE="$HOME/learning/automation/watcher.pid"

# Ignore patterns
#IGNORE_REGEX="(\.git|\.vscode|automation/logs|a\.out$|\.o$|\.swp$|\.tmp$)"
IGNORE_REGEX="(\.git|\.vscode|automation/logs|4913$|\.sw[p-x]$|\.tmp$|\.o$|a\.out$|~$)"
