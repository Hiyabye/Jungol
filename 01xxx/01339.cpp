#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  if (n < 1 || n > 100 || n % 2 == 0) {
    cout << "INPUT ERROR";
    return;
  }

  int idx = 0;
  vector<vector<int>> v(n, vector<int>((n + 1) / 2, 0));
  for (int i = (n - 1) / 2; i >= 0; i--) {
    for (int j = i; j < n - i; j++) v[j][i] = idx++;
  }

  for (int i = 0; i < (n + 1) / 2; i++) {
    for (int j = 0; j <= i; j++) cout << (char)('A' + v[i][j] % 26) << " ";
    cout << "\n";
  }
  for (int i = (n + 1) / 2; i < n; i++) {
    for (int j = 0; j < n - i; j++) cout << (char)('A' + v[i][j] % 26) << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
