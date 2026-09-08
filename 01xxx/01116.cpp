#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<vector<int>> v(9, vector<int>(9));
  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 9; j++) cin >> v[i][j];

  int mx = v[0][0], x = 0, y = 0;
  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 9; j++) {
      if (v[i][j] > mx) {
        mx = v[i][j];
        x = i + 1;
        y = j + 1;
      }
    }
  cout << mx << "\n" << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
