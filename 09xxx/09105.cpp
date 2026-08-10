#include <iostream>
#include <vector>
using namespace std;

inline void calc(int n, vector<int> &v) {
  if (n == 0) {
    for (int x : v) cout << x << " ";
    cout << "\n";
    return;
  }

  for (int i = 1; i <= 6; i++) {
    v.push_back(i);
    calc(n - 1, v);
    v.pop_back();
  }
}

void solve(void) {
  int n;
  cin >> n;

  vector<int> v;
  calc(n, v);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
