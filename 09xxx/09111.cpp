#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s = "jungol olympiad";
  vector<int> v(5);
  for (int i = 0; i < 5; i++) cin >> v[i];

  for (int i = 0; i < 5; i++) cout << s[v[i]];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
