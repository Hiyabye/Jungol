#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 1};
int dy[4] = {1, 1, 1, 0};

inline bool valid(int x, int y) { return 0 <= x && x < 19 && 0 <= y && y < 19; }

inline bool check1(const vector<vector<int>> &v, int x, int y, int d) {
  for (int i = 0; i < 5; i++) {
    int nx = x + dx[d] * i, ny = y + dy[d] * i;
    if (!valid(nx, ny) || v[nx][ny] == 0 || v[nx][ny] != v[x][y]) return false;
  }
  return true;
}

inline bool check2(const vector<vector<int>> &v, int x, int y, int d) {
  int sx = x - dx[d], sy = y - dy[d], ex = x + dx[d] * 5, ey = y + dy[d] * 5;
  if (valid(sx, sy) && v[sx][sy] == v[x][y]) return false;
  if (valid(ex, ey) && v[ex][ey] == v[x][y]) return false;
  return true;
}

void solve(void) {
  vector<vector<int>> v(19, vector<int>(19));
  for (int i = 0; i < 19; i++)
    for (int j = 0; j < 19; j++) cin >> v[i][j];

  for (int x = 0; x < 19; x++) {
    for (int y = 0; y < 19; y++) {
      for (int d = 0; d < 4; d++) {
        if (check1(v, x, y, d) && check2(v, x, y, d)) {
          cout << v[x][y] << "\n" << x + 1 << " " << y + 1;
          return;
        }
      }
    }
  }
  cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
