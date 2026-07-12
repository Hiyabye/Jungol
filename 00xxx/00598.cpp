#include <cctype>
#include <iostream>
using namespace std;

void solve(void) {
  char c;
  cin >> c;
  while (isalnum(c)) {
    if (isalpha(c)) cout << c << "\n";
    else cout << (int)c << "\n";
    cin >> c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
