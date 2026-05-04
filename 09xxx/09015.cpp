#include <iostream>
using namespace std;

void solve(void) {
  cout << "두 수를 입력하시오. ";
  int a, b;
  cin >> a >> b;

  cout << a << " + " << b << " = " << a + b << "\n";
  cout << a << " * " << b << " = " << a * b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
