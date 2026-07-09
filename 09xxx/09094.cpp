#include <iomanip>
#include <iostream>
using namespace std;

inline int diff1(int a, int b) { return a >= b ? a - b : b - a; }

inline double diff2(double a, double b) { return a >= b ? a - b : b - a; }

void solve(void) {
  int a, b;
  cin >> a >> b;
  double c, d;
  cin >> c >> d;

  cout << "두 정수의 차 : " << diff1(a, b) << "\n두 실수의 차 : " << fixed
       << setprecision(6) << diff2(c, d);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
