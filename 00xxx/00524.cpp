#include <iostream>
using namespace std;

void solve(void) {
  int a, b;
  cin >> a >> b;

  cout << ((a != 0) && (b != 0)) << " " << ((a != 0) || (b != 0));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
