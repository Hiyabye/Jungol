#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  char a, b;
  cin >> a >> b;

  while (n--) cout << a << a << b << b << b << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
