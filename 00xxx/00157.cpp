#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v;

  int n;
  cin >> n;
  while (n != 0) {
    v.push_back(n);
    cin >> n;
  }

  int cnt = 0, sum = 0;
  for (int x : v) {
    if (x % 5 == 0) {
      cnt++;
      sum += x;
    }
  }
  cout << "Multiples of 5 : " << cnt << "\n";
  cout << "sum : " << sum << "\n";
  cout << "avg : " << fixed << setprecision(1) << (double)sum / cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
