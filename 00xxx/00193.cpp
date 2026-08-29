#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v(5);
  for (int i = 0; i < 5; i++) cin >> v[i];
  char c;
  string s;
  cin >> c >> s;

  bool flag = false;
  for (int i = 0; i < 5; i++) {
    if (v[i].find(c) != string::npos || v[i].find(s) != string::npos) {
      flag = true;
      cout << v[i] << "\n";
    }
  }
  if (!flag) cout << "none";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
