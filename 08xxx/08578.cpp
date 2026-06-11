#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int ans = 1e9;
  for (int i = 1; i < n; i++) ans = min(ans, v[i] - v[i - 1]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
