#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(10);
  for (int i = 0; i < 10; i++) cin >> v[i];

  for (int &x : v) x++;
  sort(v.begin(), v.end());

  for (int x : v) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
