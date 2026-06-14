#include <iostream>
#include <vector>
using namespace std;

inline vector<bool> precompute(int n) {
  vector<bool> p(n + 1, true);
  p[0] = p[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (!p[i]) continue;
    for (int j = i * i; j <= n; j += i) p[j] = false;
  }
  return p;
}

void solve(const vector<bool> &p) {
  int m, n;
  cin >> m >> n;

  int ans = 0;
  for (int i = m; i <= n; i++) {
    if (p[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = precompute(10000000);

  solve(p);
  return 0;
}
