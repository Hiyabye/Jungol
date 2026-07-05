#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> v;
  while (n) {
    v.push_back(n);
    cin >> n;
  }

  cout << v.size() << "\n";
  for (int x : v) {
    if (x & 1) cout << x * 2 << " ";
    else cout << x / 2 << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
