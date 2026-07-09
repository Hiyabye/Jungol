#include <iostream>
using namespace std;

inline int calc(int a, int b, char c) {
  switch (c) {
  case '+':
    return a + b;
  case '-':
    return a - b;
  case '*':
    return a * b;
  case '/':
    return a / b;
  default:
    return 0;
  }
}

void solve(void) {
  int a, b;
  char c;
  cin >> a >> c >> b;

  cout << a << " " << c << " " << b << " = " << calc(a, b, c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
