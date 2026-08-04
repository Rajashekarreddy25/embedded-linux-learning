#!/bin/bash

source "$(dirname "$0")/lib/logger.sh"

clear_log

ROOT_DIR="$HOME/learning"

TOTAL=0
PASS=0
FAIL=0

log_info "Searching for Makefiles..."

while read -r makefile
do
    PROJECT_DIR=$(dirname "$makefile")

    TOTAL=$((TOTAL + 1))

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
        PASS=$((PASS + 1))
        log_success "Build Successful"
    else
        FAIL=$((FAIL + 1))
        log_error "Build Failed"
    fi

done < <(find "$ROOT_DIR" -type f -name "Makefile")

log_info "----------------------------------------"
log_info "Total Projects : $TOTAL"
log_success "Successful     : $PASS"
log_error "Failed         : $FAIL"

log_info "Finished building Makefile projects."
