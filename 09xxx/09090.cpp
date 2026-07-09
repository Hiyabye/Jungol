#include <iostream>
using namespace std;

inline int sum(int a, int b) { return a + b; }

inline int mul(int a, int b) { return a * b; }

void solve(void) {
  cout << "두 수를 입력하세요. " << flush;
  int a, b;
  cin >> a >> b;

  cout << "합 : " << sum(a, b) << "\n곱 : " << mul(a, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
