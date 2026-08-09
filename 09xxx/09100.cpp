#include <iostream>
using namespace std;

void solve(void) {
  int a, b;
  cin >> a >> b;

  cout << "(" << a << " + 10) * (" << b << " - 5) = " << (a + 10) * (b - 5);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
