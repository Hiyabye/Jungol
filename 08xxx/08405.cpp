#include <iostream>
#include <vector>
using namespace std;

inline vector<vector<int>> precompute(void) {
  vector<vector<int>> v(15, vector<int>(15, 0));
  for (int y = 1; y <= 14; y++) v[0][y] = y;
  for (int x = 1; x <= 14; x++) {
    for (int y = 1; y <= 14; y++) v[x][y] = v[x - 1][y] + v[x][y - 1];
  }
  return v;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<int>> dp = precompute();

  int x, y;
  while (cin >> x >> y) cout << dp[x][y] << "\n";
  return 0;
}
