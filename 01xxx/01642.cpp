#include <iostream>
#include <vector>
using namespace std;

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

inline bool check_row(const vector<vector<char>> &v, int r, int c) {
  for (int i = 1; i <= c; i++) {
    if (v[r][i] == 'X') return false;
  }
  return true;
}

inline bool check_col(const vector<vector<char>> &v, int r, int c) {
  for (int i = 1; i <= r; i++) {
    if (v[i][c] == 'X') return false;
  }
  return true;
}

void solve(void) {
  int r, c;
  cin >> r >> c;
  vector<vector<char>> a(r + 2, vector<char>(c + 2, '.'));
  for (int i = 1; i <= r; i++)
    for (int j = 1; j <= c; j++) cin >> a[i][j];

  vector<vector<char>> b = a;
  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= c; j++) {
      if (a[i][j] != 'X') continue;
      int cnt = 0;
      for (int k = 0; k < 4; k++) { cnt += a[i + dr[k]][j + dc[k]] == '.'; }
      if (cnt >= 3) b[i][j] = '.';
    }
  }

  int r_mn = 1, r_mx = r;
  while (check_row(b, r_mn, c)) r_mn++;
  while (check_row(b, r_mx, c)) r_mx--;

  int c_mn = 1, c_mx = c;
  while (check_col(b, r, c_mn)) c_mn++;
  while (check_col(b, r, c_mx)) c_mx--;

  for (int i = r_mn; i <= r_mx; i++) {
    for (int j = c_mn; j <= c_mx; j++) { cout << b[i][j]; }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
