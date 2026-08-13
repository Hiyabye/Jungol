#include <iostream>
using namespace std;

inline int calc(int n) {
  if (n == 1) return 1;
  else return calc(n - 1) + calc(n / 2);
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
