#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  char c;
  cin >> s >> c;

  if (s.find(c) == string::npos) cout << "No";
  else cout << s.find(c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
