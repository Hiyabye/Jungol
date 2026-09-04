#include <iostream>
#include <vector>
using namespace std;

inline bool check1(int n, const vector<int> &r, const vector<int> &c) {
  for (int i = 0; i < n; i++) {
    if (r[i] & 1) return false;
    if (c[i] & 1) return false;
  }
  return true;
}

inline bool check2(int n, const vector<int> &r, const vector<int> &c) {
  int a = 0, b = 0;
  for (int i = 0; i < n; i++) {
    if (r[i] & 1) {
      if (a) return false;
      a = i + 1;
    }
    if (c[i] & 1) {
      if (b) return false;
      b = i + 1;
    }
  }
  cout << "Change bit (" << a << "," << b << ")";
  return true;
}

void solve(void) {
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> v[i][j];

  vector<int> r(n, 0), c(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      r[i] += v[i][j];
      c[i] += v[j][i];
    }
  }

  if (check1(n, r, c)) cout << "OK";
  else if (!check2(n, r, c)) cout << "Corrupt";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
