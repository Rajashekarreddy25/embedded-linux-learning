#!/bin/bash

commit_repo()
{
    echo
    echo "========== GIT MODULE =========="

    cd "$WATCH_DIR" || {
        echo "ERROR: Cannot enter repository."
        return 1
    }

    echo "[1/4] Staging changes..."
    git add .

    if git diff --cached --quiet
    then
        echo "No new changes detected."

        DIRTY=0
        return 0
    fi

    COMMIT_MSG="Auto Commit - $(date '+%Y-%m-%d %H:%M:%S')"

    echo "[2/4] Creating commit..."

    if ! git commit -m "$COMMIT_MSG"
    then
        echo "Commit failed."
        return 1
    fi

    echo "[3/4] Pushing to GitHub..."

    if ! git push origin main
    then
        echo "Push failed."
        return 1
    fi

    echo "[4/4] Done."

    DIRTY=0

    echo "Repository State : CLEAN"
}
