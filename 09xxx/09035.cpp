#include <iostream>
using namespace std;

void solve(void) {
  cout << "세 수를 입력하세요. ";
  int a, b, c;
  cin >> a >> b >> c;

  if (a >= b && a >= c) {
    cout << "입력받은 수 중 가장 큰 수는 " << a << "입니다.";
  } else if (b >= a && b >= c) {
    cout << "입력받은 수 중 가장 큰 수는 " << b << "입니다.";
  } else {
    cout << "입력받은 수 중 가장 큰 수는 " << c << "입니다.";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
