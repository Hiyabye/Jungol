#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<vector<int>> &a, int n, int x, int y) {
  for (int i = x; i < x + n; i++) {
    for (int j = y; j < y + n; j++) {
      if (a[i][j] != a[x][y]) return false;
    }
  }
  return true;
}

inline void calc(const vector<vector<int>> &a, int n, int x, int y) {
  if (check(a, n, x, y)) {
    cout << a[x][y];
    return;
  }

  cout << "X";
  calc(a, n / 2, x, y);
  calc(a, n / 2, x, y + n / 2);
  calc(a, n / 2, x + n / 2, y);
  calc(a, n / 2, x + n / 2, y + n / 2);
}

void solve(void) {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> a[i][j];

  calc(a, n, 0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
