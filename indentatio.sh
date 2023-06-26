#!/bin/bash

directory="/sorting_algorithms"

# Iterate over all files in the directory
for file in "$directory"/*; do
  # Check if the file is a regular file
  if [[ -f "$file" ]]; then
    # Open the file in Vim, run the gg=G command, and save the changes
    vim -c "normal gg=G" -c "wq" "$file"
  fi
done
