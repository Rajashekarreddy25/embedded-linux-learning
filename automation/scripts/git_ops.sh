#!/bin/bash

commit_repo()
{
    echo
    echo "========== GIT MODULE =========="

    cd "$WATCH_DIR" || {
        echo "ERROR: Cannot change directory."
        return 1
    }

    echo "[1] Current directory:"
    pwd

    echo "[2] Running git add ."
    git add .

    echo "[3] Checking staged changes..."

    if git diff --cached --quiet
    then
        echo "Nothing staged."

        DIRTY=0
        return 0
    fi

    echo "[4] Creating commit..."

    COMMIT_MSG="Auto Commit - $(date '+%Y-%m-%d %H:%M:%S')"

    git commit -m "$COMMIT_MSG"

    if [ $? -ne 0 ]
    then
        echo "Commit failed."
        return 1
    fi

    CURRENT_BRANCH=$(git branch --show-current)

    echo "[5] Branch : $CURRENT_BRANCH"

    echo "[6] Running git push..."

    git push origin "$CURRENT_BRANCH"

    if [ $? -ne 0 ]
    then
        echo "Push failed."
        return 1
    fi

    echo "[7] Push successful."

    DIRTY=0

    echo "Repository State : CLEAN"
}
