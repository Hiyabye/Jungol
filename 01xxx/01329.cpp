#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  if (n < 1 || n > 100 || n % 2 == 0) {
    cout << "INPUT ERROR!";
    return;
  }

  for (int i = 1; i <= n; i += 2) {
    for (int j = 0; j < i / 2; j++) cout << " ";
    for (int j = 0; j < i; j++) cout << "*";
    cout << "\n";
  }
  for (int i = n - 2; i >= 1; i -= 2) {
    for (int j = 0; j < i / 2; j++) cout << " ";
    for (int j = 0; j < i; j++) cout << "*";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
