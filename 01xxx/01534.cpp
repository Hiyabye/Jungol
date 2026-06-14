#include <iostream>
#include <string>
using namespace std;

inline char conv(int r) { return r < 10 ? '0' + r : 'A' + r - 10; }

void solve(void) {
  int n, b;
  cin >> n >> b;

  string s = "";
  while (n) {
    s = conv(n % b) + s;
    n /= b;
  }
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
