#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  while (s.length() > 1) {
    int n;
    cin >> n;
    if (--n >= s.length()) n = s.length() - 1;
    s.erase(n, 1);
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
