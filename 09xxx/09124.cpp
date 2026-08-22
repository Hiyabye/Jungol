#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b;
  cin >> a >> b;

  cout << b.substr(0, 3) << a.substr(3) << "\n";
  cout << b << a.substr(0, 3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
