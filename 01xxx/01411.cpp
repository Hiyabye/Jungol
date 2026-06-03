#include <iostream>
#include <vector>
#define MOD 20100529
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<int> dp(n + 2, 0);
  dp[1] = 1;
  dp[2] = 3;
  for (int i = 3; i <= n; i++) { dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % MOD; }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
