#include <iostream>
using namespace std;

void solve(void) {
  int x, y, n;
  cin >> x >> y >> n;

  cout << (n / 2 * 2) * y + (n % 2) * x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
