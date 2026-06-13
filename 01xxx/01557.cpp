#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> f(37, 1);
  f[1] = 3;
  for (int i = 2; i <= 36; i++) f[i] = f[i - 1] + f[i - 2];

  int ans = 0;
  for (int i = 1; f[i] <= n; i++) {
    if (f[i] % 2 == 0) ans += f[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
