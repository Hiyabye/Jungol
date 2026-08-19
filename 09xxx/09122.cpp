#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s, t;
  cin >> s >> t;

  if (s.length() <= t.length()) cout << s << "\n" << t;
  else cout << t << "\n" << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
