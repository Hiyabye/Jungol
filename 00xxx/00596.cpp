#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  int n;
  cin >> s >> n;

  for (int i = 0; s[i] && i < n; i++) cout << s[s.length() - i - 1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
