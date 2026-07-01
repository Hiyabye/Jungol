#include <iostream>
using namespace std;

void solve(void) {
  cout << "점수를 입력하세요. ";
  int n;
  cin >> n;

  while (0 <= n && n <= 100) {
    if (n >= 80) cout << "축하합니다. 합격입니다.\n";
    else cout << "죄송합니다. 불합격입니다.\n";
    cout << "점수를 입력하세요. ";
    cin >> n;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
