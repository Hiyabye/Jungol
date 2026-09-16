#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  for (int i = 0; i < 10; i++) cout << s[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
