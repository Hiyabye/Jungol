#!/bin/zsh

# 인자가 2개가 아니면 사용법 출력
if [ "$#" -ne 2 ]; then
    echo "Usage: ./helper.sh {add|build|commit} <number>"
    exit 1
fi

COMMAND=$1
NUMBER=$2

# 1. 숫자를 5자리로 포맷팅 (예: 579 -> 00579)
PADDED_NUM=$(printf "%05d" $NUMBER)

# 2. 앞 2자리를 추출하여 폴더명 생성 (예: 00579 -> 00xxx)
FOLDER_PREFIX="${PADDED_NUM:0:2}"
FOLDER="${FOLDER_PREFIX}xxx"
FILE_PATH="${FOLDER}/${PADDED_NUM}.cpp"

# 폴더가 없으면 생성 (add 명령 시 유용)
if [ ! -d "$FOLDER" ]; then
    mkdir -p "$FOLDER"
fi

# 3. 명령어별 분기 처리
case $COMMAND in
    add)
        cp template/main.cpp "$FILE_PATH"
        zed "$FILE_PATH"
        echo "✅ Created: $FILE_PATH"
        ;;
    build)
        if [ -f "$FILE_PATH" ]; then
            g++ -std=c++20 "$FILE_PATH" -o "out"
            echo "🚀 Build Complete: $FILE_PATH"
        else
            echo "❌ Error: $FILE_PATH 파일을 찾을 수 없습니다."
        fi
        ;;
    commit)
        if [ -f "$FILE_PATH" ]; then
            python3 scripts/generate_readme.py
            git add "$FILE_PATH" README.md
            git commit -m "Add ${PADDED_NUM}.cpp"
            echo "📦 Committed: ${PADDED_NUM}.cpp"
        else
            echo "❌ Error: $FILE_PATH 파일이 없어 커밋할 수 없습니다."
        fi
        ;;
    *)
        echo "Unknown command: $COMMAND"
        echo "Available commands: add, build, commit"
        exit 1
        ;;
esac
