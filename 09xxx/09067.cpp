#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(10);
  for (int i = 0; i < 10; i++) cin >> v[i];

  cout << v[2] << " " << v[4] << " " << v[9];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
