#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) {
  return ('0' <= c && c <= '9') ? c - '0' : c - 'A' + 10;
}

inline char i2c(int i) { return (i < 10) ? '0' + i : 'A' + i - 10; }

bool solve(void) {
  int a, b;
  cin >> a;
  if (a == 0) return false;
  string s;
  cin >> s >> b;

  long long n = 0;
  for (char c : s) n = n * a + c2i(c);

  string t = "";
  while (n) {
    t = i2c(n % b) + t;
    n /= b;
  }
  if (t.empty()) t = "0";

  cout << t << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
