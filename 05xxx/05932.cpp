#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    if (i & 1) {
      for (int j = n; j >= 1; j--) {
        cout << j << " ";
      }
    } else {
      for (int j = 1; j <= n; j++) {
        cout << j << " ";
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
