#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;
  vector<long long> p(m);
  for (int i = 0; i < m; i++) cin >> p[i];
  sort(p.begin(), p.end());

  long long mx = p[0] * m, idx = 0;
  for (int i = 1; i < m; i++) {
    if (p[i] * min(n, m - i) >= mx) {
      mx = p[i] * min(n, m - i);
      idx = i;
    }
  }
  cout << p[idx] << " " << mx;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
