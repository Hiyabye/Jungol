#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<long long> a(n + 1, 0);
  for (int i = 1; i <= n; i++) cin >> a[i];
  for (int i = 1; i <= n; i++) a[i] += a[i - 1];

  int q;
  cin >> q;
  while (q--) {
    int s, e;
    cin >> s >> e;
    cout << a[e] - a[s - 1] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
