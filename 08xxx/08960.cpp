#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> c(n);
  for (int i = 0; i < n; i++) cin >> c[i];

  for (int i = 0; i < n; i++) {
    int ans = 0;
    for (int j = 0; j < i; j++) {
      if (c[j] == c[i]) ans += i - j;
    }
    for (int j = i + 1; j < n; j++) {
      if (c[j] == c[i]) ans += j - i;
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
