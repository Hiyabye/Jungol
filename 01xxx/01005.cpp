#include <iostream>
#include <vector>
using namespace std;

inline vector<int> precompute(int n) {
  vector<bool> p(n + 1, true);
  p[0] = p[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (!p[i]) continue;
    for (int j = i * i; j <= n; j += i) p[j] = false;
  }

  vector<int> ret(n + 1, 1);
  for (int i = 1; i <= n; i++) {
    if (!p[i]) continue;
    for (int j = i; j <= n; j += i) ret[j] = i;
  }
  return ret;
}

void solve(const vector<int> &v) {
  int n;
  cin >> n;

  int ans = 0, mx = 0;
  while (n--) {
    int x;
    cin >> x;
    if (v[x] > mx) ans = x, mx = v[x];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> v = precompute(20000);
  solve(v);
  return 0;
}
