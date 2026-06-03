#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int a, b, c;
  cin >> a >> b >> c;

  string s = to_string(a * b * c);
  for (int i = 0; i < 10; i++) {
    int cnt = 0;
    for (char c : s) cnt += (c - '0' == i);
    cout << cnt << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
