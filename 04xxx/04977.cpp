#include <iostream>
#include <string>
using namespace std;

inline string int_bin(int n) {
  string s = "";
  while (n > 0) {
    s = to_string(n & 1) + s;
    n >>= 1;
  }
  if (s.empty()) return "0";
  return s;
}

inline string dec_bin(double n) {
  string s = "";
  for (int i = 0; i < 4; i++) {
    n *= 2;
    s += to_string((int)n);
    if (n >= 1) n -= 1;
  }
  return s;
}

void solve(void) {
  double n;
  cin >> n;

  cout << int_bin((int)n) << "." << dec_bin(n - (int)n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
