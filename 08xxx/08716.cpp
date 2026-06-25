#include <iostream>
using namespace std;

inline long long power(long long base, long long exp, long long mod) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long x, y, n;
  cin >> x >> y >> n;
  long long a, b, m;
  cin >> a >> b >> m;

  cout << power(x, y, n) << "\n" << power(a, b, m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
