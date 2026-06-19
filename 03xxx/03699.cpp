#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    string s, t;
    cin >> s >> t;
    mp[t]++;
  }

  int ans = 1;
  for (const auto &[k, v] : mp) ans *= (v + 1);
  cout << ans - 1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}
