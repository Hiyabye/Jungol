#include <iostream>
using namespace std;

void draw(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) cout << "*";
    cout << "\n";
  }
}

void solve(void) {
  int n;
  cin >> n;

  draw(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
