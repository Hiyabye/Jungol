#include <iomanip>
#include <iostream>
using namespace std;

double avg(double a, double b, double c) { return (a + b + c) / 3; }

void solve(void) {
  cout << "세과목의 점수를 입력하세요. ";
  double a, b, c;
  cin >> a >> b >> c;

  cout << fixed << setprecision(2) << "평균 : " << avg(a, b, c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
