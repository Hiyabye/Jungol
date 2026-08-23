#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v(5);
  for (int i = 0; i < 5; i++) cin >> v[i];
  sort(v.begin(), v.end(), greater<string>());

  for (int i = 0; i < 5; i++) cout << v[i] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
