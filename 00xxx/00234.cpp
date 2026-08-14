#include <iostream>
using namespace std;

int memo[101] = {0, 1, 2, 0};

inline int f(int n) {
  if (memo[n]) return memo[n];
  return memo[n] = f(n - 1) * f(n - 2) % 100;
}

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
