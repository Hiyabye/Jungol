#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int x, y;
  string s;
  cin >> x >> y >> s;

  for (char c : s) {
    y += (c == 'U') - (c == 'D');
    x += (c == 'R') - (c == 'L');
  }
  cout << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
