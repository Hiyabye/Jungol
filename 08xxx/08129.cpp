#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int n, k, idx = 1;
vector<int> a;
map<vector<int>, int> mp;
set<vector<int>> s;

inline void dfs(int cur) {
  if (a.size() == k) {
    if (s.find(a) != s.end()) return;
    s.insert(a);
    mp[a] = idx++;
    return;
  }

  for (int i = cur; i <= n; i++) {
    a.push_back(i);
    dfs(i + 1);
    a.pop_back();
  }
}

void solve(void) {
  cin >> n >> k;
  vector<int> v(k);
  for (int i = 0; i < k; i++) cin >> v[i];

  dfs(1);

  if (mp.find(v) != mp.end()) cout << mp[v];
  else cout << "None";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
