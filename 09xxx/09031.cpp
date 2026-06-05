#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << "입력받은 수 중 큰 수는 " << max(a, b) << "이고 작은 수는 " << min(a, b) << "입니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
