#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c, d, e, n;
  cin >> a >> b >> c >> d >> e >> n;

  int ans = 0;
  while (n >= 16 && e--) n -= 16, ans++;
  while (n >= 8 && d--) n -= 8, ans++;
  while (n >= 4 && c--) n -= 4, ans++;
  while (n >= 2 && b--) n -= 2, ans++;
  while (n >= 1 && a--) n -= 1, ans++;

  if (n > 0) cout << "impossible";
  else cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
