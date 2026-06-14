#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) cout << "  ";
    for (int j = 0; j <= i; j++) {
      cout << (char)((j * n - j * (j - 1) / 2 - j + i) % 26 + 'A') << " ";
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
