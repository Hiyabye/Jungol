#include <iostream>
using namespace std;

inline bool check(int a, int b, int c) {
  return a + b + c >= 180 && a >= 40 && b >= 40 && c >= 40;
}

void solve(void) {
  cout << "3과목의 점수를 입력하세요. " << flush;
  int a, b, c;
  cin >> a >> b >> c;

  cout << (check(a, b, c) ? "축하합니다. 합격입니다."
                          : "죄송합니다. 불합격입니다.");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
