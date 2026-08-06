#include <iostream>
using namespace std;

inline int calc(int n) {
  if (n < 10) return n;
  return calc(n / 10) + (n % 10);
}

void solve(void) {
  int n;
  cin >> n;

  cout << calc(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
