#include <iostream>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;
  if (n < 1 || n > 100 || m < 1 || m > 3) {
    cout << "INPUT ERROR!";
    return;
  }

  if (m == 1) {
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        cout << "*";
      }
      cout << "\n";
    }
  } else if (m == 2) {
    for (int i = n; i >= 1; i--) {
      for (int j = 0; j < i; j++) {
        cout << "*";
      }
      cout << "\n";
    }
  } else if (m == 3) {
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < n - i; j++) {
        cout << " ";
      }
      for (int j = 0; j < 2 * i - 1; j++) {
        cout << "*";
      }
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
