#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  for (char c : s) {
    if ('A' <= c && c <= 'Z') cout << (char)(c - 'A' + 'a');
    else if ('a' <= c && c <= 'z') cout << (char)(c - 'a' + 'A');
    else cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
