#include <iostream>
using namespace std;

void solve(void) {
  cout << "1. 삽입\n";
  cout << "2. 수정\n";
  cout << "3. 삭제\n";
  cout << "숫자를 선택하세요. ";

  int op;
  cin >> op;
  if (op == 1) cout << "삽입을 선택하셨습니다.";
  else if (op == 2) cout << "수정을 선택하셨습니다.";
  else if (op == 3) cout << "삭제를 선택하셨습니다.";
  else cout << "잘못 입력하셨습니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
