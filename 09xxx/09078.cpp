#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<vector<int>> a(3, vector<int>(3));
  for (int i = 0; i < 3; i++) {
    cout << "첫 번째 배열 " << i + 1 << "행 ";
    for (int j = 0; j < 3; j++) cin >> a[i][j];
  }

  vector<vector<int>> b(3, vector<int>(3));
  for (int i = 0; i < 3; i++) {
    cout << "두 번째 배열 " << i + 1 << "행 ";
    for (int j = 0; j < 3; j++) cin >> b[i][j];
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) cout << a[i][j] + b[i][j] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
