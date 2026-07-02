#include <iostream>
using namespace std;

void menu(void) {
  cout << "1. 입력하기\n";
  cout << "2. 출력하기\n";
  cout << "3. 삭제하기\n";
  cout << "4. 끝내기\n";
  cout << "작업할 번호를 선택하세요. ";
}

void solve(void) {
  int n;

  menu();
  cin >> n;
  while (n != 4) {
    if (n == 1) cout << "\n입력하기를 선택하였습니다.\n\n";
    else if (n == 2) cout << "\n출력하기를 선택하였습니다.\n\n";
    else if (n == 3) cout << "\n삭제하기를 선택하였습니다.\n\n";
    else cout << "\n잘못 입력하였습니다.\n\n";
    menu();
    cin >> n;
  }
  cout << "\n끝내기를 선택하였습니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
