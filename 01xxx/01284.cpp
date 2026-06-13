#include <iostream>
using namespace std;

void solve(void) {
  for (int i = 0; i < 10; i++) {
    int x;
    cin >> x;
    cout << x % 42 << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
