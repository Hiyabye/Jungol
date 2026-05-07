#include <iostream>
using namespace std;

void solve(void) {
  int a, b;
  cin >> a >> b;

  while (a != 0 && b != 0) {
    if (a < 0 || a > 1000 || b < 0 || b > 4000) {
      cout << "INPUT ERROR!";
    } else if (b % 2 != 0 || b / 2 < a || 2 * a < b / 2) {
      cout << 0;
    } else {
      cout << b / 2 - a << " " << 2 * a - b / 2;
    }
    cout << "\n";
    cin >> a >> b;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
