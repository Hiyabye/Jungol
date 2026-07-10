#include <iostream>
using namespace std;

void solve(void) {
  char c;
  do {
    cin >> c;
    cout << c << " -> " << (int)c << "\n";
  } while (c != '0');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
