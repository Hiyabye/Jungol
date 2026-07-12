#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s, t;
  cin >> s >> t;

  cout << s.length() + t.length();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
