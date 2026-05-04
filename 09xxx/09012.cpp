#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n = 5;
  cout << "원주 = " << n << " * 2 * ";
  cout << fixed << setprecision(6) << 3.14 << " = " << n * 2 * 3.14;
  cout << "\n넓이 = " << n << " * " << n << " * ";
  cout << fixed << setprecision(6) << 3.14 << " = " << n * n * 3.14;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
