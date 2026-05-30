#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline string dec2bin(long long d) {
  string b = string(63, '0');
  for (int i = 0; i < 63; i++) {
    b[62 - i] = (d >> i) & 1 ? '1' : '0';
  }
  return b;
}

inline long long bin2dec(const string &b) {
  long long d = 0;
  for (int i = 0; i < 63; i++) {
    d += (b[i] - '0') * (1LL << (62 - i));
  }
  return d;
}

void solve(void) {
  long long a;
  cin >> a;

  string s = dec2bin(a), t = s;
  prev_permutation(s.begin(), s.end());
  next_permutation(t.begin(), t.end());
  long long x = bin2dec(s), y = bin2dec(t);

  if (x > a)
    x = 0;
  if (y < a)
    y = 0;
  cout << x << " " << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
