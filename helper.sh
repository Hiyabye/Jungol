#!/bin/sh
set -eu

usage() {
  printf 'Usage: %s {add|build|commit} <number>\n' "$0"
}

fail() {
  printf 'Error: %s\n' "$*" >&2
  exit 1
}

if [ "$#" -ne 2 ]; then
  usage >&2
  exit 1
fi

action=$1
number=$2

case "$number" in
  ''|*[!0-9]*)
    fail "number must contain digits only."
    ;;
esac

# Pad to at least 5 digits without treating leading zeros as octal.
padded_number=$(printf '%5s' "$number" | tr ' ' '0')
folder_prefix=$(printf '%s' "$padded_number" | cut -c 1-2)
folder="${folder_prefix}xxx"
file_path="${folder}/${padded_number}.cpp"

case "$action" in
  add)
    [ -f template/main.cpp ] || fail "template not found: template/main.cpp"
    [ ! -e "$file_path" ] || fail "file already exists: $file_path"

    mkdir -p "$folder"
    cp template/main.cpp "$file_path"
    printf 'Created: %s\n' "$file_path"
    nvim "$file_path"
    ;;

  build)
    [ -f "$file_path" ] || fail "file not found: $file_path"

    clang-format -i "$file_path"
    g++ -std=c++20 "$file_path" -o out
    printf 'Built: %s -> out\n' "$file_path"
    ;;

  commit)
    [ -f "$file_path" ] || fail "file not found: $file_path"

    python3 scripts/generate_readme.py
    git add "$file_path" README.md
    git commit -m "Add $padded_number.cpp"
    printf 'Committed: %s.cpp\n' "$padded_number"
    ;;

  *)
    printf 'Error: unknown command: %s\n' "$action" >&2
    usage >&2
    exit 1
    ;;
esac