#include <iostream>
using namespace std;

void solve(int a, int b) {
  if (a < 2 || a > 9 || b < 2 || b > 9) {
    cout << "INPUT ERROR!\n";
    return;
  }

  if (a <= b) {
    for (int i = a; i <= b; i++) {
      for (int j = 1; j <= 9; j++) {
        cout << i << " * " << j << " = " << i * j << "\n";
      }
      cout << "\n";
    }
  } else {
    for (int i = a; i >= b; i--) {
      for (int j = 1; j <= 9; j++) {
        cout << i << " * " << j << " = " << i * j << "\n";
      }
      cout << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;
  while (cin >> a >> b)
    solve(a, b);
  return 0;
}
