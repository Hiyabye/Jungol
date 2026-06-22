#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool cmp(int a, int b) {
  int a1 = a % 10, a2 = (a / 10) % 10, a3 = (a / 100) % 10;
  int b1 = b % 10, b2 = (b / 10) % 10, b3 = (b / 100) % 10;
  if (a1 != b1) return a1 < b1;
  if (a2 != b2) return a2 < b2;
  return a3 < b3;
}

void solve(void) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end(), cmp);

  for (int i = 0; i < n; i++) cout << v[i] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
