#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  unordered_map<int, vector<int>> mp;
  while (n--) {
    int x, y;
    cin >> x >> y;
    mp[y].push_back(x);
  }

  long long ans = 0;
  for (auto &[_, v] : mp) {
    sort(v.begin(), v.end());
    if (v.size() == 1) continue;
    ans += v[1] - v[0];
    for (int i = 1; i + 1 < v.size(); i++) {
      ans += min(v[i] - v[i - 1], v[i + 1] - v[i]);
    }
    ans += v[v.size() - 1] - v[v.size() - 2];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
