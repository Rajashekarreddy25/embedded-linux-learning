#!/bin/bash

source "$(dirname "$0")/lib/logger.sh"

clear_log

log_info "Build Started"

log_success "rotate90.c compiled"

log_error "main.c failed"

log_info "Build Finished"
