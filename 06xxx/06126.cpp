#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  unordered_map<int, int> mp;
  while (n--) {
    int s, e, c;
    cin >> s >> e >> c;
    mp[s] += c;
    mp[e + 1] -= c;
  }

  vector<int> dp(1000001, 0);
  for (int i = 1; i <= 1000000; i++) dp[i] = dp[i - 1] + mp[i];

  int q;
  cin >> q;
  while (q--) {
    int t;
    cin >> t;
    cout << dp[t] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
