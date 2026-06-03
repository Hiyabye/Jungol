#!/usr/bin/env python3
from __future__ import annotations

from datetime import datetime, timedelta, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
README = ROOT / "README.md"
KST = timezone(timedelta(hours=9), "KST")
COLUMNS = 5
SOURCE_EXTENSIONS = {".c", ".cpp"}


def find_solutions() -> list[Path]:
    solutions: list[Path] = []

    for path in ROOT.glob("[0-9][0-9]xxx/[0-9][0-9][0-9][0-9][0-9].*"):
        if path.suffix in SOURCE_EXTENSIONS:
            solutions.append(path)

    return sorted(solutions, key=lambda path: int(path.stem))


def make_link(path: Path) -> str:
    relative_path = path.relative_to(ROOT).as_posix()
    problem_number = int(path.stem)
    return f"[{problem_number}번]({relative_path})"


def make_table(solutions: list[Path]) -> str:
    rows = [
        "| 문제 | 문제 | 문제 | 문제 | 문제 |",
        "| :---: | :---: | :---: | :---: | :---: |",
    ]

    links = [make_link(path) for path in solutions]
    for index in range(0, len(links), COLUMNS):
        cells = links[index : index + COLUMNS]
        cells.extend([""] * (COLUMNS - len(cells)))
        rows.append("| " + " | ".join(cells) + " |")

    return "\n".join(rows)


def generate_readme() -> str:
    solutions = find_solutions()
    updated_at = datetime.now(KST).strftime("%Y-%m-%d %H:%M:%S (KST)")
    table = make_table(solutions)

    return f"""<div align="center">

# Jungol

**정올 문제 풀이 저장소**

마지막으로 업데이트: {updated_at}

코드를 그대로 복붙하는 것은 자제 부탁드립니다.

총 {len(solutions)}문제를 풀었습니다.

{table}

</div>
"""


def main() -> None:
    README.write_text(generate_readme(), encoding="utf-8")


if __name__ == "__main__":
    main()
