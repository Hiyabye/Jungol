#include <algorithm>
#include <iostream>
using namespace std;

inline int calc(void) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  return a + b + c + d;
}

void solve(void) { cout << max(calc(), calc()); }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
