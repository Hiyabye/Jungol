#include <iostream>
using namespace std;

inline int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
inline int lcm(int a, int b) { return a / gcd(a, b) * b; }

void solve(void) {
  int a, b;
  cin >> a >> b;

  cout << gcd(a, b) << "\n" << lcm(a, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
