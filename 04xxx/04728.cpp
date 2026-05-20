#include <iostream>
using namespace std;
using ll = long long;

inline ll calc(ll n, ll m, ll k) {
  return (n * m * (m - 1) / 2) * k + (n * (n - 1) / 2 * m * m);
}

void solve(void) {
  ll n, m, k, d;
  cin >> n >> m >> k >> d;

  ll x = calc(n, m, k);
  ll y = d / x, z = x * y;

  cout << (z ? z : -1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
