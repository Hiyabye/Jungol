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
    int a = i * (i + 1) / 2, b = (i + 1) * (i + 2) / 2;
    if (i & 1) {
      for (int j = b; j > a; j--) cout << j << " ";
    } else {
      for (int j = a + 1; j <= b; j++) cout << j << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
