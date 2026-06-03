#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, d;
  cin >> n >> d;
  vector<int> p(n, 0);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    p[x]++;
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (p[i] > d) { ans += (p[i] - 2) / (d - 1); }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
