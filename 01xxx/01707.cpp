#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void solve(void) {
  int n;
  cin >> n;

  int x = 0, y = 0, d = 0, num = 1;
  vector<vector<int>> v(n, vector<int>(n));
  while (num <= n * n) {
    v[x][y] = num++;
    int nx = x + dx[d], ny = y + dy[d];
    if (nx < 0 || nx >= n || ny < 0 || ny >= n || v[nx][ny]) {
      d = (d + 1) % 4;
      nx = x + dx[d];
      ny = y + dy[d];
    }
    x = nx;
    y = ny;
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
