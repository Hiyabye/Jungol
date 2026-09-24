#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << "a ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
