#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Data {
  int s, e, idx;
};

inline bool cmp(const Data &x, const Data &y) {
  if (x.e - x.s != y.e - y.s) return x.e - x.s < y.e - y.s;
  return x.s < y.s;
}

void solve(void) {
  int n;
  cin >> n;
  vector<Data> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].s >> v[i].e;
    v[i].idx = i + 1;
  }
  sort(v.begin(), v.end(), cmp);

  for (const auto &x : v) cout << x.idx << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
