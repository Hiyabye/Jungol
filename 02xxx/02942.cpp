#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<long long> dp = {0, 1, 1, 1, 2, 2};
  for (int i = 6; i <= 100; i++) { dp[i] = dp[i - 1] + dp[i - 5]; }
  cout << dp[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
