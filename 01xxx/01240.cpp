#include <iostream>
#define int128 __int128
using namespace std;

void solve(void) {
  unsigned long long n;
  cin >> n;

  int128 ans = 0, l = 0, r = n;
  while (l <= r) {
    int128 m = l + (r - l) / 2;
    if (m * m <= n) {
      ans = m;
      l = m + 1;
    } else {
      r = m - 1;
    }
  }
  cout << (long long)ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
