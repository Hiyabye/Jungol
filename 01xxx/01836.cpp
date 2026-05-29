#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int ans = max(0, v[0]);
  for (int i = 1; i < n; i++) {
    v[i] = max(v[i], v[i] + v[i - 1]);
    ans = max(ans, v[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
