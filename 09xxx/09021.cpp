#include <iostream>
using namespace std;

void solve(void) {
  int a = 10, b = 10;

  cout << "최초값 a = " << a << ", b = " << b << "\n\n";
  cout << "a++ = " << a++ << ", ++b = " << ++b << "\n";
  cout << "실행후 a = " << a << ", b = " << b << "\n\n";
  cout << "a-- = " << a-- << ", --b = " << --b << "\n";
  cout << "실행후 a = " << a << ", b = " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
