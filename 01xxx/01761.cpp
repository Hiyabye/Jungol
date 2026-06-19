#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool calc(int k, int s, int b, int x) {
  int x1 = x / 100, x2 = (x / 10) % 10, x3 = x % 10;
  if (x1 == x2 || x2 == x3 || x3 == x1) return false;
  if (x1 == 0 || x2 == 0 || x3 == 0) return false;

  int k1 = k / 100, k2 = (k / 10) % 10, k3 = k % 10;
  int strike = (x1 == k1) + (x2 == k2) + (x3 == k3);
  int ball =
      (x1 == k2 || x1 == k3) + (x2 == k3 || x2 == k1) + (x3 == k1 || x3 == k2);
  return strike == s && ball == b;
}

void solve(void) {
  int n;
  cin >> n;

  vector<bool> v(1000, true);
  while (n--) {
    int k, s, b;
    cin >> k >> s >> b;
    for (int i = 100; i <= 999; i++) {
      if (!v[i]) continue;
      if (!calc(k, s, b, i)) v[i] = false;
    }
  }
  cout << count(v.begin() + 100, v.end(), true);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
