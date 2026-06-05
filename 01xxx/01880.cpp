#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s; cin.ignore();
  string t; getline(cin, t);

  for (char c : t) {
    if (c == ' ') cout << c;
    else if ('A' <= c & c <= 'Z') {
      cout << (char)(s[c - 'A'] - 32);
    } else {
      cout << (char)(s[c - 'a']);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
