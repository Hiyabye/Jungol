#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  cout << "정사각형의 넓이 : ";
  double n;
  cin >> n;

  cout << "정사각형의 한 변의 길이 : " << fixed << setprecision(6) << sqrt(n);
  cout << "\n밑과 지수 : ";
  double a, b;
  cin >> a >> b;

  cout << fixed << setprecision(6) << a << "의 " << b << "승은 " << pow(a, b)
       << "입니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
