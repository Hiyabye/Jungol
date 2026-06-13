#include <iostream>
using namespace std;

void solve(void) {
  double a, b;
  cin >> a >> b;

  // (int)(a + b) : a + b를 먼저 계산한 후, 그 결과를 int로 변환
  // (int)a + (int)b : a와 b를 각각 int로 변환한 후, 그 결과를 더함
  cout << (int)(a + b) << " " << (int)a + (int)b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
