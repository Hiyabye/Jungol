#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n), d(n);
  for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

  unordered_map<int, int> ab;
  ab.reserve(n * n);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) { ab[a[i] + b[j]]++; }

  long long ans = 0;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      int cd = -(c[i] + d[j]);
      if (ab.count(cd)) ans += ab[cd];
    }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
