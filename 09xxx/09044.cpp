#include <iostream>
using namespace std;

void solve(void) {
  int n, sum = 0, cnt = 0;
  cin >> n;
  while (n) {
    if (n & 1) sum += n, cnt++;
    cin >> n;
  }

  cout << "홀수의 합 = " << sum << "\n";
  cout << "홀수의 평균 = " << sum / cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
