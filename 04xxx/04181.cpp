#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

inline void backtrack(int n, int m, int s) {
  if (s < 0) return;
  if (v.size() == m) {
    if (s == 0) {
      for (int x : v) cout << x << " ";
      cout << "\n";
    }
    return;
  }
  for (int i = 1; i <= n; i++) {
    v.push_back(i);
    backtrack(n, m, s - i);
    v.pop_back();
  }
}

void solve(void) {
  int n, m, s;
  cin >> n >> m >> s;

  backtrack(n, m, s);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
