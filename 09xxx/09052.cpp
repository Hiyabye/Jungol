#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    int x;
    cin >> x;
    sum += x;
  }
  cout << "총점 : " << sum << "\n평균 : ";
  cout << fixed << setprecision(1) << (double)sum / 5;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
