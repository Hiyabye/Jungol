#include <cmath>
#include <iostream>
using namespace std;

inline int calc(char c) { return c; }

void solve(void) {
  char a, b;
  cin >> a >> b;

  cout << calc(a) + calc(b) << " " << abs(calc(a) - calc(b));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
