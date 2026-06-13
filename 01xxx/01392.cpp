#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int sum = 0, mn = 1e9;
  for (int i = 0; i < 7; i++) {
    int x;
    cin >> x;
    if (x & 1) {
      sum += x;
      mn = min(mn, x);
    }
  }
  if (mn == 1e9) cout << -1;
  else cout << sum << "\n" << mn;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
