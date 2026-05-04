#include <iostream>
using namespace std;

inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
inline long long lcm(long long a, long long b) { return a / gcd(a, b) * b; }

void solve(void) {
  long long p, v, k;
  cin >> p >> v >> k;

  long long a = k / (p + 1);
  long long b = k / (v + 1);
  long long c = k / (lcm(p + 1, v + 1));

  cout << k - a - b + c << " " << c << " " << b - c << " " << a - c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
