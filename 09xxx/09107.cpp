#include <iostream>
using namespace std;

long long memo[51] = {1, 1, 1, 0};

inline long long f(int n) {
  if (memo[n]) return memo[n];
  return memo[n] = f(n - 1) + f(n - 2);
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
