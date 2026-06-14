#include <iostream>
#include <vector>
using namespace std;

int k;
vector<int> s, v;

inline void dfs(int idx) {
  if (v.size() == 6) {
    for (int i = 0; i < 6; i++) cout << v[i] << " ";
    cout << "\n";
    return;
  }

  for (int i = idx; i < k; i++) {
    v.push_back(s[i]);
    dfs(i + 1);
    v.pop_back();
  }
}

void solve(void) {
  cin >> k;
  s.resize(k);
  for (int i = 0; i < k; i++) cin >> s[i];

  dfs(0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
