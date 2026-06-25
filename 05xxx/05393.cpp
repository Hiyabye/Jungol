#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  long long ans = 0;
  unordered_map<string, int> mp;
  while (n--) {
    string a, b;
    cin >> a >> b;
    a = a.substr(0, 2);
    if (a != b) ans += mp[b + a];
    mp[a + b]++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
