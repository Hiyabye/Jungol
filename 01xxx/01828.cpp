#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.second != b.second) return a.second < b.second;
  return a.first < b.first;
}

void solve(void) {
  int n;
  cin >> n;
  vector<pair<int, int>> c(n);
  for (int i = 0; i < n; i++) cin >> c[i].first >> c[i].second;
  sort(c.begin(), c.end(), cmp);

  int ans = 1, cur = c[0].second;
  for (int i = 1; i < n; i++) {
    if (c[i].first > cur) {
      ans++;
      cur = c[i].second;
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
