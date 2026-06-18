#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> p(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    p[i][0] = p[i][i] = 1;
    for (int j = 1; j < i; j++) p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
  }

  if (m == 1) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) cout << p[i][j] << " ";
      cout << "\n";
    }
  } else if (m == 2) {
    for (int i = n - 1; i >= 0; i--) {
      for (int j = 0; j < n - i - 1; j++) cout << " ";
      for (int j = 0; j <= i; j++) cout << p[i][j] << " ";
      cout << "\n";
    }
  } else if (m == 3) {
    for (int i = n - 1; i >= 0; i--) {
      for (int j = n - 1; j >= i; j--) cout << p[j][j - i] << " ";
      cout << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
