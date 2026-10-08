#include <iostream>
using namespace std;

inline int sum(int n) {
  int ret = 0;
  while (n > 0) {
    ret += n % 10;
    n /= 10;
  }
  return ret;
}

void solve(void) {
  int n;
  cin >> n;

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (i % sum(i) == 0) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
