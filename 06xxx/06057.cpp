#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

void solve(void) {
  int p, n;
  cin >> p >> n;

  int ans = 0;
  unordered_map<int, queue<int>> mp;
  while (n--) {
    int cmd;
    cin >> cmd;
    if (cmd == 0) {
      int a, b;
      cin >> a >> b;
      mp[a].push(b);
    } else if (cmd == 1) {
      int a;
      cin >> a;
      if (!mp[a].empty()) {
        ans += mp[a].front();
        mp[a].pop();
      }
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
