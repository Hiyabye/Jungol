#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(10);
  for (int i = 0; i < 10; i++) cin >> v[i];

  int a = -1, b = -1;
  for (int i = 0; i < 10; i++) {
    if (v[i] & 1) {
      if (a == -1 || a > v[i]) a = v[i];
    } else {
      if (b == -1 || b < v[i]) b = v[i];
    }
  }
  cout << a << " " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
