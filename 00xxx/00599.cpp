#include <cctype>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  for (char c : s) {
    if (isalpha(c)) cout << (char)toupper(c);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
