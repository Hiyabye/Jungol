#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  int ans = s[0] == '1' ? -128 : 0;
  for (int i = 1; i < 8; i++) {
    ans += (s[i] - '0') * (1 << (7 - i));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
