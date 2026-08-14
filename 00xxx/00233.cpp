#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

inline void f(int n, int m) {
  if (n == 1) {
    if (1 <= m && m <= 6) {
      for (int x : v) cout << x << " ";
      cout << m << "\n";
    }
    return;
  } else {
    for (int i = 1; i <= 6; i++) {
      v.push_back(i);
      f(n - 1, m - i);
      v.pop_back();
    }
  }
}

void solve(void) {
  int n, m;
  cin >> n >> m;

  f(n, m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
