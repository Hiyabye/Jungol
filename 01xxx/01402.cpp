#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n, k;
  cin >> n >> k;

  set<int> s;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      s.insert(i);
      s.insert(n / i);
    }
  }

  if (s.size() < k) {
    cout << 0;
  } else {
    auto it = s.begin();
    while (--k) { it++; }
    cout << *it;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
