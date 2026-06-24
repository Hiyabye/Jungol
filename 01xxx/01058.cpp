#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k;
  cin >> n >> k;
  vector<long long> m(n + 1, 0);
  for (int i = 1; i <= n; i++) cin >> m[i];
  for (int i = 1; i <= n; i++) m[i] += m[i - 1];

  long long ans = 0;
  for (int i = k; i <= n; i++) ans = max(ans, m[i] - m[i - k]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
