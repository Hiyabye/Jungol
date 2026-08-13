#include <iostream>
using namespace std;

inline void f(int n) {
  if (n == 1) {
    cout << 1 << " ";
    return;
  }
  f(n / 2);
  cout << n << " ";
}

void solve(void) {
  int n;
  cin >> n;

  f(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
