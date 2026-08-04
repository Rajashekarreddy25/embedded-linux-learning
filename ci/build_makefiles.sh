#!/bin/bash

source "$(dirname "$0")/lib/logger.sh"

clear_log

ROOT_DIR="$HOME/learning"

log_info "Searching for Makefiles..."

find "$ROOT_DIR" -type f -name "Makefile" | while read -r makefile
do
    PROJECT_DIR=$(dirname "$makefile")

    log_info "----------------------------------------"
    log_info "Project : $PROJECT_DIR"

    cd "$PROJECT_DIR" || continue

    if make clean >/dev/null 2>&1
    then
        log_info "make clean completed"
    else
        log_info "No clean target"
    fi

    if make
    then
        log_success "Build Successful"
    else
        log_error "Build Failed"
    fi

done

log_info "Finished building Makefile projects."
