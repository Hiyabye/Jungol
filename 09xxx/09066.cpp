#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<char> v(26);
  for (char c = 'A'; c <= 'Z'; c++) v[c - 'A'] = c;

  for (int i = 25; i >= 0; i--) cout << v[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
