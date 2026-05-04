#include <iostream>
using namespace std;

void solve(void) {
  int a, b;
  cin >> a >> b;

  cout << a * (b % 10) << "\n";
  cout << a * ((b / 10) % 10) << "\n";
  cout << a * (b / 100) << "\n";
  cout << a * b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
