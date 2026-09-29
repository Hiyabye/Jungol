#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<long long> x(n), y(n);
  for (int i = 0; i < n; i++) cin >> x[i];
  for (int i = 0; i < n; i++) cin >> y[i];

  sort(x.begin(), x.end());
  sort(y.begin(), y.end(), greater<long long>());

  long long ans = 0;
  for (int i = 0; i < n; i++) ans += x[i] * y[i];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
