#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  set<int> s;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      s.insert(i);
      s.insert(n / i);
    }
  }

  for (int x : s) { cout << x << " "; }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
