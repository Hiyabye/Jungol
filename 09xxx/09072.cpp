#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(10);
  for (int i = 0; i < 10; i++) cin >> v[i];

  int sum = 0;
  for (int i = 0; i < 10; i++) sum += v[i];

  cout << "총점 = " << sum << "\n";
  cout << "평균 = " << fixed << setprecision(1) << (double)sum / 10;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
