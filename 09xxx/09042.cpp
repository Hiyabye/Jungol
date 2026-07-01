#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n, sum = 0, cnt = 0;
  cin >> n;
  while (n) {
    sum += n;
    cnt++;
    cin >> n;
  }

  cout << "입력된 자료의 개수 = " << cnt << "\n";
  cout << "입력된 자료의 합계 = " << sum << "\n";
  cout << "입력된 자료의 평균 = " << fixed << setprecision(2)
       << (double)sum / cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
