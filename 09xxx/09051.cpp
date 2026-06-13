#include <iostream>
using namespace std;

void solve(void) {
  int ans = 0;
  for (int i = 0; i < 10; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) ans++;
  }
  cout << "입력받은 짝수는 " << ans << "개입니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
