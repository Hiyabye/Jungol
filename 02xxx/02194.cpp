#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, s;
  cin >> n >> s;
  long long c, y;
  cin >> c >> y;

  long long ans = c * y, mn = c;
  while (--n) {
    cin >> c >> y;
    mn = min(mn + s, c);
    ans += mn * y;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
