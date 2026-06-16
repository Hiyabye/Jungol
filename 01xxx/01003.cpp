#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    ans.insert(ans.end() - x, i);
  }

  for (int i = 0; i < n; i++) { cout << ans[i] << " "; }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
