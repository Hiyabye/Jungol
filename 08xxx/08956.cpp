#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n;
  cin >> n;
  vector<vector<char>> c(n, vector<char>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> c[i][j];

  for (int i = 0; i < n; i++) {
    bool row = true, col = true;
    for (int j = 1; j < n; j++) {
      if (c[i][j] != c[i][0]) row = false;
      if (c[j][i] != c[0][i]) col = false;
    }
    if (row || col) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}
