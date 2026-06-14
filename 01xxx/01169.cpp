#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, type;
vector<int> v;

inline void dfs1(void) {
  if (v.size() == n) {
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << "\n";
    return;
  }

  for (int i = 1; i <= 6; i++) {
    v.push_back(i);
    dfs1();
    v.pop_back();
  }
}

inline void dfs2(int cur) {
  if (v.size() == n) {
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << "\n";
    return;
  }

  for (int i = cur; i <= 6; i++) {
    v.push_back(i);
    dfs2(i);
    v.pop_back();
  }
}

inline void dfs3(void) {
  if (v.size() == n) {
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << "\n";
    return;
  }

  for (int i = 1; i <= 6; i++) {
    if (find(v.begin(), v.end(), i) != v.end()) continue;
    v.push_back(i);
    dfs3();
    v.pop_back();
  }
}

void solve(void) {
  cin >> n >> type;

  if (type == 1) dfs1();
  else if (type == 2) dfs2(1);
  else dfs3();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
