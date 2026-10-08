#include <iostream>
using namespace std;

void solve(void) {
  int w, h;
  cin >> w >> h;

  cout << w * h - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
