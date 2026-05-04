#include <iostream>
using namespace std;

void solve() {
  cout << "ASCII code =? ";
  int n;
  cin >> n;

  while (33 <= n && n <= 127) {
    cout << (char)n << "\n";
    cout << "ASCII code =? ";
    cin >> n;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
