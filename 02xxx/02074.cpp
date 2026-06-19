#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(n, 0));

  int x = 0, y = n / 2, num = 1;
  while (num <= n * n) {
    v[x][y] = num;
    if (num++ % n) {
      if (--x < 0) x = n - 1;
      if (--y < 0) y = n - 1;
    } else {
      if (++x >= n) x = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) cout << v[i][j] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
