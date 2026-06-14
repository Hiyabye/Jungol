#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> v;

inline void dfs() {
  if (v.size() == n - 1) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) sum += v[i];
    int last = m - sum;
    if (last < 1 || last > 6) return;
    for (int i = 0; i < n - 1; i++) cout << v[i] << " ";
    cout << last << "\n";
    return;
  }

  for (int i = 1; i <= 6; i++) {
    v.push_back(i);
    dfs();
    v.pop_back();
  }
}

void solve(void) {
  cin >> n >> m;

  dfs();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
