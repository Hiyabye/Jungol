#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  if (n < 1 || n > 50 || n % 2 == 0) {
    cout << "INPUT ERROR!";
    return;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * i; j++) cout << " ";
    for (int j = 1; j < 2 * (n - i); j++) cout << i << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
