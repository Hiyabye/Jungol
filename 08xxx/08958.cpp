#include <iostream>
using namespace std;

void solve(void) {
  int x, y, z;
  cin >> x >> y >> z;

  cout << (x <= z || y <= z);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
