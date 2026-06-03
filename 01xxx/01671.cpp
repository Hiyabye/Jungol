#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<vector<bool>> v(101, vector<bool>(101, false));
  while (n--) {
    int a, b;
    cin >> a >> b;
    for (int i = a; i < a + 10; i++) {
      for (int j = b; j < b + 10; j++) { v[i][j] = true; }
    }
  }

  int ans = 0;
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      if (!v[i][j]) continue;
      if (i == 0 || !v[i - 1][j]) ans++;
      if (i == 100 || !v[i + 1][j]) ans++;
      if (j == 0 || !v[i][j - 1]) ans++;
      if (j == 100 || !v[i][j + 1]) ans++;
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
