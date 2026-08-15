#include <iostream>
using namespace std;

inline int calc(int n) {
  if (n == 0) return 1;
  return (n % 10 ? n % 10 : 1) * calc(n / 10);
}

void solve(void) {
  int a, b, c;
  cin >> a >> b >> c;

  cout << calc(a * b * c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
