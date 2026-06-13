#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];

  int ans = 0;
  for (int i = 0; i < n; i++) {
    int mx = 0;
    for (int j = 0; j < m; j++) mx = max(mx, a[i][j]);
    ans += mx;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
