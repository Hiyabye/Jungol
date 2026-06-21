#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<vector<bool>> &c) {
  int cnt = 0;
  for (int i = 0; i < 5; i++) {
    if (c[i][0] & c[i][1] & c[i][2] & c[i][3] & c[i][4]) cnt++;
    if (c[0][i] & c[1][i] & c[2][i] & c[3][i] & c[4][i]) cnt++;
  }
  if (c[0][0] & c[1][1] & c[2][2] & c[3][3] & c[4][4]) cnt++;
  if (c[0][4] & c[1][3] & c[2][2] & c[3][1] & c[4][0]) cnt++;
  return cnt >= 3;
}

void solve(void) {
  vector<int> a(25), b(25);
  for (int i = 0; i < 25; i++) cin >> a[i];
  for (int i = 0; i < 25; i++) cin >> b[i];

  int ans = 0;
  vector<vector<bool>> c(5, vector<bool>(5, false));
  for (int i = 0; i < 25; i++) {
    int idx = distance(a.begin(), find(a.begin(), a.end(), b[i]));
    c[idx / 5][idx % 5] = true;
    if (!ans && check(c)) ans = i + 1;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
