#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int l, n;
  cin >> l >> n;

  int a = 0, b = 0;
  while (n--) {
    int x;
    cin >> x;
    a = max(a, min(x, l - x));
    b = max(b, max(x, l - x));
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
