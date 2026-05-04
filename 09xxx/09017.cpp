#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  cout << "두 개의 실수를 입력하시오.\n";
  float a, b;
  cin >> a >> b;

  cout << "x = " << fixed << setprecision(2) << a << "\n";
  cout << "y = " << fixed << setprecision(2) << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
