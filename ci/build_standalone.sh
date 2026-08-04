#!/bin/bash

source "$(dirname "$0")/lib/logger.sh"
source "$(dirname "$0")/lib/utils.sh"

#ROOT_DIR="$HOME/learning"
#BUILD_DIR="$ROOT_DIR/ci/build"

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
ROOT_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"


BUILD_DIR="$ROOT_DIR/ci/build"

mkdir -p "$BUILD_DIR"


mkdir -p "$BUILD_DIR"

TOTAL=0
PASS=0
FAIL=0
SKIP=0

log_info "Searching for standalone C files..."

while read -r file
do
    DIR="$(dirname "$file")"

    if has_makefile "$DIR"
    then
        SKIP=$((SKIP + 1))
        log_info "Skipping Makefile project : $file"
        continue
    fi

    TOTAL=$((TOTAL + 1))

    exe="$BUILD_DIR/$(basename "$file" .c)"

    log_info "Compiling : $file"

    if gcc "$file" -o "$exe"
    then
        PASS=$((PASS + 1))
        log_success "Compiled : $(basename "$exe")"
    else
        FAIL=$((FAIL + 1))
        log_error "Failed : $file"
    fi

done < <(
find "$ROOT_DIR" \
-type f \
-name "*.c"
)

log_info "----------------------------------------"
log_info "Standalone Files : $TOTAL"
log_info "Skipped          : $SKIP"
log_success "Successful       : $PASS"
log_error "Failed           : $FAIL"


if [ "$FAIL" -gt 0 ]
then
    exit 1
else
    exit 0
fi
