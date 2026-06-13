#include <iostream>
using namespace std;

void solve(void) {
  int y, b;
  cin >> y >> b;

  cout << y * b * b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
