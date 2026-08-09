#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<vector<int>> v(5, vector<int>(5));
  for (int i = 0; i < 5; i++) v[i][0] = v[i][i] = 1;
  for (int i = 2; i < 5; i++)
    for (int j = 1; j < i; j++) v[i][j] = v[i - 1][j - 1] + v[i - 1][j];

  for (int i = 0; i < 5; i++) {
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
