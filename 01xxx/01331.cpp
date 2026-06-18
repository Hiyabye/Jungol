#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {1, 1, -1, -1};
int dy[4] = {-1, 1, 1, -1};

void solve(void) {
  int n;
  cin >> n;

  char ch = 'A';
  vector<vector<char>> v(2 * n - 1, vector<char>(2 * n - 1, ' '));
  for (int i = 0; i < n - 1; i++) {
    int x = i, y = n - 1;
    for (int d = 0; d < 4; d++) {
      for (int j = 0; j < n - i - 1; j++) {
        v[x][y] = ch++;
        if (ch > 'Z') ch = 'A';
        x += dx[d];
        y += dy[d];
      }
    }
  }
  v[n - 1][n - 1] = ch;

  for (int i = 0; i < 2 * n - 1; i++) {
    for (int j = 0; j < 2 * n - 1; j++) cout << v[i][j] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
