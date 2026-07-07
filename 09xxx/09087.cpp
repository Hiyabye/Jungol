#include <iomanip>
#include <iostream>
using namespace std;

inline double avg(int a, int b, int c) { return (a + b + c) / 3.0; }

void solve(void) {
  cout << "세과목의 점수를 입력하세요. " << flush;
  int a, b, c;
  cin >> a >> b >> c;

  cout << "평균 : " << fixed << setprecision(2) << avg(a, b, c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
