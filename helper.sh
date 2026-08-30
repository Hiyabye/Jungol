#!/usr/bin/env bash
set -euo pipefail

usage() {
  echo "Usage: $0 {add|build|commit} <number>"
}

fail() {
  echo "Error: $*" >&2
  exit 1
}

if (( $# != 2 )); then
  usage
  exit 1
fi

command=$1
number=$2

[[ $number =~ ^[0-9]+$ ]] || fail "number must contain digits only."

# Pad the problem number to at least 5 digits (579 -> 00579).
printf -v padded_number '%05d' "$((10#$number))"
folder="${padded_number:0:2}xxx"
file_path="$folder/$padded_number.cpp"

case "$command" in
  add)
    [[ ! -e $file_path ]] || fail "file already exists: $file_path"

    mkdir -p "$folder"
    cp template/main.cpp "$file_path"
    echo "Created: $file_path"
    nvim "$file_path"
    ;;

  build)
    [[ -f $file_path ]] || fail "file not found: $file_path"

    clang-format -i "$file_path"
    g++ -std=c++20 "$file_path" -o out
    echo "Built: $file_path -> out"
    ;;

  commit)
    [[ -f $file_path ]] || fail "file not found: $file_path"

    python3 scripts/generate_readme.py
    git add "$file_path" README.md
    git commit -m "Add $padded_number.cpp"
    echo "Committed: $padded_number.cpp"
    ;;

  *)
    echo "Error: unknown command '$command'." >&2
    usage
    exit 1
    ;;
esac