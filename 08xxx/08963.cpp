#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x;
  cin >> n >> x;
  vector<int> h(n);
  for (int i = 0; i < n; i++) cin >> h[i];

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (h[i] >= x) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
