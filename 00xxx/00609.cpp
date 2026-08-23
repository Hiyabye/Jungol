#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b, c;
  cin >> a >> b >> c;

  cout << min({a, b, c});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
