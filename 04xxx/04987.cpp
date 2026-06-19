#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s, t;
  cin >> s >> t;

  while (s.find(t) != string::npos) s.replace(s.find(t), t.size(), "");
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
