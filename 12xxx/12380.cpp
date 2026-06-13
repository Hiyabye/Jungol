#include <iostream>
using namespace std;

bool solve(void) {
  int n, m, k;
  cin >> n >> m >> k;

  bool a = true, b = true;
  while (k--) {
    int r, c;
    cin >> r >> c;
    if ((r + c) & 1) a = false;
    else b = false;
  }
  return a || b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}
