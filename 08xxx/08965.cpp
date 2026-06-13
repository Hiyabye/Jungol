#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, const vector<int> &a, int x) {
  int l = distance(a.begin(), lower_bound(a.begin(), a.end(), x));
  return abs(l - (n - l));
}

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  int ans = 0, cur = 1e9;
  for (int i = 0; i < n; i++) {
    int idx = calc(n, a, a[i]);
    if (idx <= cur) {
      ans = a[i];
      cur = idx;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
