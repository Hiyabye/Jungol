#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  unordered_map<int, long long> mp1, mp2;
  while (n--) {
    int x, y;
    cin >> x >> y;
    mp1[x]++;
    mp2[y]++;
  }

  long long ans = 0;
  for (const auto &[_, k] : mp1) ans += k * (k - 1) / 2;
  for (const auto &[_, k] : mp2) ans += k * (k - 1) / 2;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
