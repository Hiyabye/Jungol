#include <iostream>
#define MOD 20091024
using namespace std;

inline long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) { ret = ret * base % MOD; }
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int x, y;
  cin >> x >> y;

  cout << power(x, y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
