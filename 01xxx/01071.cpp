#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int m;
  cin >> m;

  int a = 0, b = 0;
  for (int x : v) {
    if (m % x == 0)
      a += x;
    if (x % m == 0)
      b += x;
  }
  cout << a << "\n" << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
