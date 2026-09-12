#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  long long cnt = 0, cur = 1;
  for (int i = 2; i <= n; i++) {
    cur *= i;
    if (cur % 10) continue;
    cur /= 10;
    cnt++;
  }
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
