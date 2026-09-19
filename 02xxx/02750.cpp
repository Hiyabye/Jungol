#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int k, n, m;
  cin >> k >> n >> m;

  cout << max(0, k * n - m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
