#!/bin/sh
set -eu

usage() {
  printf 'Usage: %s {add|build|commit} <number>\n' "$0"
}

fail() {
  printf 'Error: %s\n' "$*" >&2
  exit 1
}

validate_number() {
  case "$1" in
    ''|*[!0-9]*)
      fail "number must contain digits only."
      ;;
  esac
}

prepare_paths() {
  number=$1
  padded_number=$(printf '%5s' "$number" | tr ' ' '0')
  folder_prefix=$(printf '%s' "$padded_number" | cut -c 1-2)
  folder="${folder_prefix}xxx"
  file_path="${folder}/${padded_number}.cpp"
  export padded_number folder file_path
}

cmd_add() {
  [ -f template/main.cpp ] || fail "template not found: template/main.cpp"
  [ ! -e "$file_path" ] || fail "file already exists: $file_path"

  mkdir -p "$folder"
  cp template/main.cpp "$file_path"
  printf 'Created: %s\n' "$file_path"
  nvim "$file_path"
}

cmd_build() {
  [ -f "$file_path" ] || fail "file not found: $file_path"

  clang-format -i "$file_path"
  g++ -std=c++20 "$file_path" -o out
  pbcopy < "$file_path"
  printf 'Built: %s -> out (source code copied to clipboard)\n' "$file_path"
}

cmd_commit() {
  [ -f "$file_path" ] || fail "file not found: $file_path"

  python3 scripts/generate_readme.py
  git add "$file_path" README.md
  git commit -m "Add $padded_number.cpp"
  printf 'Committed: %s.cpp\n' "$padded_number"
  if [ -f out ]; then
    rm out
    printf 'Removed: out\n'
  fi
}

if [ "$#" -ne 2 ]; then
  usage >&2
  exit 1
fi

action=$1
number=$2

validate_number "$number"
prepare_paths "$number"

case "$action" in
  add)    cmd_add ;;
  build)  cmd_build ;;
  commit) cmd_commit ;;
  *)
    printf 'Error: unknown command: %s\n' "$action" >&2
    usage >&2
    exit 1
    ;;
esac
