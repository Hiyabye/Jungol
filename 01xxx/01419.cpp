#include <iostream>
using namespace std;

void solve(void) {
  unsigned int x;
  cin >> x;

  unsigned int ans = 0;
  for (int i = 0; i < 4; i++) {
    ans = (ans << 8) | (x & 0xFF);
    x >>= 8;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
