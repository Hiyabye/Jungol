#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b;
  cin >> a >> b;

  cout << a.substr(0, 2) << b.substr(2) << a.substr(0, 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
