#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(10);
  for (int i = 0; i < 10; i++) cin >> v[i];

  cout << *max_element(v.begin(), v.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
