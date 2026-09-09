#include <iostream>
using namespace std;

void solve(void) {
  int cnt = 0;
  for (int i = 0; i < 4; i++) {
    int x;
    cin >> x;
    cnt += x;
  }

  switch (cnt) {
  case 4:
    cout << 'E';
    break;
  case 3:
    cout << 'A';
    break;
  case 2:
    cout << 'B';
    break;
  case 1:
    cout << 'C';
    break;
  case 0:
    cout << 'D';
    break;
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 3;
  while (t--) solve();
  return 0;
}
