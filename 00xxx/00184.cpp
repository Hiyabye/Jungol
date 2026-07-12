#include <cctype>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  for (char c : s) {
    if (!isalnum(c)) continue;
    if (isupper(c)) cout << (char)tolower(c);
    else cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
