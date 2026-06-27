#include <iostream>
using namespace std;

void solve(void) {
  cout << "주사위를 두 번 던진 결과를 입력하세요. ";
  int a, b;
  cin >> a >> b;

  if (a >= 4 && b >= 4) cout << "이겼습니다.";
  else if (a >= 4 || b >= 4) cout << "비겼습니다.";
  else cout << "졌습니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
