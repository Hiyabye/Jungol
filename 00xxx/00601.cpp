#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    rotate(s.begin(), s.end() - 1, s.end());
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
