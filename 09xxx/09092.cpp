#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(6);
  for (int i = 0; i < 6; i++) cin >> v[i];
  sort(v.begin(), v.end());

  for (int i = 0; i < 6; i++) cout << v[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
