#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++) cin >> a[i];
  for (int i = 1; i <= n; i++) a[i] += a[i - 1];

  unordered_map<int, int> mp;
  mp[a[0]]++;

  long long ans = 0;
  for (int i = 1; i <= n; i++) ans += mp[a[i]]++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
