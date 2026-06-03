#include <iostream>
#include <unordered_set>
using namespace std;

inline bool check(const unordered_set<int> &us, int mask) {
  for (const int &x : us) {
    if ((mask & x) == x) return false;
  }
  return true;
}

void solve(void) {
  int n, m;
  cin >> n >> m;
  unordered_set<int> us;
  while (m--) {
    int a, b;
    cin >> a >> b;
    us.insert((1 << (a - 1)) | (1 << (b - 1)));
  }

  int ans = 0;
  for (int mask = 0; mask < (1 << n); mask++) {
    if (check(us, mask)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
