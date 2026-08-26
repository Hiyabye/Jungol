#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> v = {"flower", "rose", "lily", "daffodil", "azalea"};

void solve(void) {
  char c;
  cin >> c;

  int cnt = 0;
  for (const string &s : v) {
    if (s[1] == c || s[2] == c) {
      cout << s << "\n";
      cnt++;
    }
  }
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
