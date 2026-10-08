#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  cout << max(0, 1 - a) + max(0, 1 - b) + max(0, 2 - c) + max(0, 2 - d) +
              max(0, 2 - e) + max(0, 8 - f);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
