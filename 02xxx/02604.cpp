#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  int ans = 10;
  for (int i = 1; i < s.length(); i++) { ans += (s[i] != s[i - 1]) ? 10 : 5; }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
