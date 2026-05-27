#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j & 1) {
        cout << (char)('A' + (n - 1 - i + j * n) % 26) << " ";
      } else {
        cout << (char)('A' + (i + j * n) % 26) << " ";
      }
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
