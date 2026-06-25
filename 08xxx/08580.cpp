#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<vector<int>> v(n);
  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    v[i].resize(m);
    for (int j = 0; j < m; j++) cin >> v[i][j];
  }
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < v[a[i]].size(); j++) cout << v[a[i]][j] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
