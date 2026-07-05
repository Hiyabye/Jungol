#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  vector<bool> v(n, false);
  for (int i = 0; i < n; i++) {
    if (s[i] == 'H') v[i] = true;
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != 'P') continue;
    for (int j = i - k; j <= i + k; j++) {
      if (j < 0 || j >= n || !v[j]) continue;
      ans++;
      v[j] = false;
      break;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
