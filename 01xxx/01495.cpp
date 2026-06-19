#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(n, 0));

  int x = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (i & 1) v[i - j][j] = x++;
      else v[j][i - j] = x++;
    }
  }
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
      if (i & 1) v[n - 1 - j][n - 1 - i + j] = x++;
      else v[n - 1 - i + j][n - 1 - j] = x++;
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
