#include <iostream>
using namespace std;

void solve(void) {
  cout << "5개의 수를 입력하시오. ";
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  cout << a + 3 << " " << b - 3 << " " << c * 3 << " " << d / 3 << " " << e % 3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
