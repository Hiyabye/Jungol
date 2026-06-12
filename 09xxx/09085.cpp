#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }
int diff(int a, int b) { return a > b ? a - b : b - a; }

void solve(void) {
  int a, b;
  cin >> a >> b;

  cout << "두 수의 합 = " << sum(a, b) << "\n" << "두 수의 차 = " << diff(a, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
