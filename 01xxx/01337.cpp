#include <iostream>
#include <vector>
using namespace std;

int dx[3] = {1, 0, -1};
int dy[3] = {1, -1, 0};

void solve(void) {
  int n;
  cin >> n;

  int x = 0, y = 0, d = 0, num = 0;
  vector<vector<int>> v(n, vector<int>(n, -1));
  while (num < n * (n + 1) / 2) {
    v[x][y] = num++ % 10;
    int nx = x + dx[d], ny = y + dy[d];
    if (nx < 0 || nx >= n || ny < 0 || ny >= n || ~v[nx][ny]) {
      d = (d + 1) % 3;
      nx = x + dx[d];
      ny = y + dy[d];
    }
    x = nx;
    y = ny;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) cout << v[i][j] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
