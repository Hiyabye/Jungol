#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a = 10, b = 20;
  swap(a, b);
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
