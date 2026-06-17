#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline void step(vector<int> &v, int i) {
  for (int j = i; j > 0; j--) {
    if (v[j - 1] > v[j]) swap(v[j - 1], v[j]);
    else break;
  }
}

void solve(void) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  for (int i = 1; i < n; i++) {
    step(v, i);
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
