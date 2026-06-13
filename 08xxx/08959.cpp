#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int ans = 0;
  for (int i = 2; i < n; i++) {
    if (s[i - 2] == 'A' && s[i - 1] == 'O' && s[i] == 'I') ans++;
    if (s[i - 2] == 'I' && s[i - 1] == 'O' && s[i] == 'I') ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
