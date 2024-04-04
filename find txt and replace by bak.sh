#!/bin/bash

mkdir -p "modified"

find -name "*.txt" -exec sh -c '
    for file do
        cp -- "$file" "modified/$(basename "$file" .txt).bak"
    done
' sh {} +