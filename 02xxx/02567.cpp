#include <iostream>
#include <unordered_map>
using namespace std;

inline int calc(int x, int n, int p) { return (x * n) % p; }

void solve(void) {
  int n, p;
  cin >> n >> p;

  int cur = n, step = 1;
  unordered_map<int, int> mp;
  while (true) {
    mp[cur] = step++;
    int nxt = calc(cur, n, p);
    if (mp.find(nxt) != mp.end()) {
      cout << step - mp[nxt];
      return;
    }
    cur = nxt;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
