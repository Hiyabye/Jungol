#include <iostream>
using namespace std;

inline void help(char c, int n1, int n2, int n3, int n4, int n5) {
  while (n1--) cout << ' ';
  while (n2--) cout << c;
  while (n3--) cout << ' ';
  while (n4--) cout << c;
  while (n5--) cout << ' ';
  cout << '\n';
}

void solve(void) {
  char c;
  cin >> c;

  help(c, 1, 4, 1, 4, 1);
  help(c, 0, 11, 0, 0, 0);
  help(c, 0, 11, 0, 0, 0);
  help(c, 2, 7, 2, 0, 0);
  help(c, 4, 3, 4, 0, 0);
  help(c, 5, 1, 5, 0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
