#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  // 정수 나눗셈과 실수 나눗셈의 차이를 보여주는 예시
  cout << n << " / 4 = " << n / 4 << "\n";
  cout << n << " / 4.0 = " << fixed << setprecision(2) << n / 4.0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
