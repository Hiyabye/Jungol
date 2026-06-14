#include <iostream>
using namespace std;

inline void hanoi(int n, int a, int b, int c) {
  if (n == 1) {
    cout << 1 << " : " << a << " -> " << b << "\n";
    return;
  }

  hanoi(n - 1, a, c, b);
  cout << n << " : " << a << " -> " << b << "\n";
  hanoi(n - 1, c, b, a);
}

void solve(void) {
  int n;
  cin >> n;

  hanoi(n, 1, 3, 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
