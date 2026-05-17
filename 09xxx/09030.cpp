#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  cout << n << "\n";
  if (n > 10) {
    cout << "10보다 큰 수를 입력하셨습니다.";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
