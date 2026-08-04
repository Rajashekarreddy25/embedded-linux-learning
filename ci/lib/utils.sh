#!/bin/bash

has_makefile()
{
    local dir="$1"

    while [ "$dir" != "/" ]
    do
        if [ -f "$dir/Makefile" ]
        then
            return 0
        fi

        dir=$(dirname "$dir")
    done

    return 1
}
