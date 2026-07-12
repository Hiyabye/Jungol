#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  getline(cin, s);

  int idx = 1;
  stringstream ss(s);
  while (ss >> s) cout << idx++ << ". " << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
