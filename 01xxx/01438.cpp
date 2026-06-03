#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<vector<bool>> v(101, vector<bool>(101, false));
  while (n--) {
    int x, y;
    cin >> x >> y;
    for (int i = x; i < x + 10; i++) {
      for (int j = y; j < y + 10; j++) { v[i][j] = true; }
    }
  }

  int ans = 0;
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      if (v[i][j]) ans++;
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
