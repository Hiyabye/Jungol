#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<long long> x(n + 1, 0);
  for (int i = 1; i <= n; i++) cin >> x[i];
  sort(x.begin(), x.end());
  for (int i = 1; i <= n; i++) x[i] += x[i - 1];

  map<long long, set<long long>> mp;
  for (int i = 1; i <= n; i++) {
    long long y = x[i] - x[i - 1];
    long long z = y * (i - 1) - x[i - 1] + x[n] - x[i - 1] - y * (n - i + 1);
    mp[z].insert(y);
  }

  for (const auto &y : mp.begin()->second) cout << y << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
