#include <iostream>
using namespace std;

void solve(void) {
  int x;
  cin >> x;

  int ans = 0;
  for (int i = 0; i < 5; i++) {
    int y;
    cin >> y;
    if (y % 10 == x) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
