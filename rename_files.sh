#!/bin/zsh

autoload -U zmv
setopt extendedglob

for f in *.cpp; do
  # match number dot space rest-of-filename
  if [[ "$f" == [0-9]*.*.cpp ]]; then
    # extract number and rest
    num="${f%%.*}"               # everything before first dot
    rest="${f#*. }"              # everything after first dot + space

    # skip if num is empty or not numeric
    if [[ -z "$num" || ! "$num" =~ ^[0-9]+$ ]]; then
      echo "Skipping $f (invalid number)"
      continue
    fi

    # format number to 4 digits
    new=$(printf "%04d. %s" "$num" "$rest")

    if [[ "$f" != "$new" ]]; then
      echo "Renaming: $f -> $new"
      git mv "$f" "$new"
    fi
  else
    echo "Skipping $f (pattern not matched)"
  fi
done
chmod +x rename_files.sh

