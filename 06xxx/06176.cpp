#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4 * i + 1; j++) cout << "d ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
