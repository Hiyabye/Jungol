#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  int a = 0, b = 0;
  for (int i = 2; i < s.length(); i++) {
    if (s[i - 2] == 'K' && s[i - 1] == 'O' && s[i] == 'I')
      a++;
    else if (s[i - 2] == 'I' && s[i - 1] == 'O' && s[i] == 'I')
      b++;
  }
  cout << a << "\n" << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
