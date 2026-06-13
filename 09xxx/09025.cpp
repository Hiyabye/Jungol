#include <iostream>
using namespace std;

void solve(void) {
  int a = 0, b = 1, c = 2;

  cout << (a && b) << " " << (a || b) << " " << (b && c) << " " << (!a);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
