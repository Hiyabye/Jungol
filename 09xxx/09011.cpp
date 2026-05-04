#include <iostream>
using namespace std;

void solve(void) {
  int a = 10, b = 20;
  cout << a << " + " << b << " = " << a + b << "\n";
  a = 30, b = 40;
  cout << a << " + " << b << " = " << a + b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
