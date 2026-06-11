#include <iostream>
using namespace std;

void solve(void) {
  cout << "점수를 입력하세요. ";
  int n;
  cin >> n;

  if (n >= 80) cout << "축하합니다. 합격입니다.";
  else cout << "죄송합니다. 불합격입니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
