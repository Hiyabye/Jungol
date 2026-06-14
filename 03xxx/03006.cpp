#include <iostream>
using namespace std;

inline long long fib(int n, int mod) {
  if (n <= 1) return n % mod;
  long long a = 0, b = 1, c;
  for (int i = 2; i <= n; i++) {
    c = (a + b) % mod;
    a = b;
    b = c;
  }
  return c;
}

void solve(void) {
  int n, m;
  cin >> n >> m;

  cout << (fib(n + 2, m) - 1 + m) % m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
