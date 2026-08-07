#include <iostream>
using namespace std;

void solve(void) {
  int a[3][3] = {{3, 5, 4}, {2, 6, 7}, {8, 10, 1}};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) cout << a[i][j] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
