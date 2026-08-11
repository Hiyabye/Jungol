#include <iostream>
using namespace std;

inline int f(int n) { return n <= 2 ? 1 : f(n - 1) + f(n - 2); }

void solve(void) {
  int n;
  cin >> n;

  cout << f(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
