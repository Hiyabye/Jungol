#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a = 0, b = 0;
  for (int i = 0; i < 7; i++) {
    int x;
    cin >> x;
    if (x & 1) a = max(a, x);
    else b = max(b, x);
  }
  cout << a + b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
