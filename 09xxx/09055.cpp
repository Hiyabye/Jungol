#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  int ans = 1;
  while (ans * (ans + 1) / 2 <= n) { ans++; }
  cout << ans << " " << ans * (ans + 1) / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
