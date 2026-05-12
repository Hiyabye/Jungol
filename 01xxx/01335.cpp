#include <iostream>
#include <vector>
using namespace std;

int w = 0, b = 0;

inline bool check(const vector<vector<int>> &v, int x, int y, int sz) {
  for (int i = 0; i < sz; i++) {
    for (int j = 0; j < sz; j++) {
      if (v[x + i][y + j] != v[x][y])
        return false;
    }
  }
  return true;
}

inline void calc(const vector<vector<int>> &v, int x, int y, int sz) {
  if (check(v, x, y, sz)) {
    if (v[x][y] == 1)
      b++;
    else
      w++;
  } else {
    int h = sz >> 1;
    calc(v, x, y, h);
    calc(v, x + h, y, h);
    calc(v, x, y + h, h);
    calc(v, x + h, y + h, h);
  }
}

void solve(void) {
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> v[i][j];

  calc(v, 0, 0, n);

  cout << w << "\n" << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
