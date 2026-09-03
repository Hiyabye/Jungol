#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(9);
  for (int i = 0; i < 9; i++) cin >> v[i];

  auto it = max_element(v.begin(), v.end());
  cout << *it << "\n" << distance(v.begin(), it) + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
