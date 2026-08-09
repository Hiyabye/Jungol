#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double r;
  cin >> r;

  cout << fixed << setprecision(2) << 6.28 * r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
