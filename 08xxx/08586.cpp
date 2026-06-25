#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
using namespace std;

inline bool cmp(const array<int, 5> &x, const array<int, 5> &y) {
  if (x[0] != y[0]) return x[0] < y[0];
  if (x[1] != y[1]) return x[1] > y[1];
  if (x[2] != y[2]) return x[2] < y[2];
  if (x[3] != y[3]) return x[3] > y[3];
  return x[4] < y[4];
}

void solve(void) {
  int n;
  cin >> n;
  vector<array<int, 5>> v(n);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < 5; j++) cin >> v[i][j];
  sort(v.begin(), v.end(), cmp);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++) cout << v[i][j] << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
