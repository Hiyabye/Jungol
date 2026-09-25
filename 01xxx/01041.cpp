#include <cmath>
#include <iostream>
using namespace std;

inline bool check(int n) {
  int k = sqrt(n);
  return k * k == n;
}

void solve(void) {
  int n, m;
  cin >> n >> m;

  bool flag = false;
  for (int i = n; i <= m; i++) {
    if (check(i)) {
      flag = true;
      cout << i << " ";
    }
  }
  if (!flag) cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
