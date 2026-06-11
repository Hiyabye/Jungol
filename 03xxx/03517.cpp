#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int q;
  cin >> q;
  while (q--) {
    int b;
    cin >> b;
    auto it = lower_bound(a.begin(), a.end(), b);
    cout << (it != a.end() && *it == b ? it - a.begin() : -1) << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
