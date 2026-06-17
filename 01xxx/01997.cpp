#include <iostream>
using namespace std;

inline int f(int n) {
  if (n <= 0) return 0;
  if (n == 1) return 1;
  int a = 1, b = 0, c = 0;
  for (int i = 2; i <= n; i++) {
    c = a + b;
    b = a;
    a = c;
  }
  return c;
}

void solve(void) {
  int d, k;
  cin >> d >> k;

  int a = f(d - 2), b = f(d - 1);
  for (int i = 1; a * i <= k; i++) {
    if ((k - a * i) % b == 0) {
      cout << i << "\n" << (k - a * i) / b;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
