#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  for (int i = 0; i < n - 1; i++) {
    auto it = min_element(v.begin() + i, v.end());
    swap(v[i], *it);
    for (int j = 0; j < n; j++) cout << v[j] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
