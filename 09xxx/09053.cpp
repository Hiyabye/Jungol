#include <iostream>
using namespace std;

void solve(void) {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) cout << i << " ";
    cout << "\n";
  }
  cout << "\n";
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) cout << j << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
