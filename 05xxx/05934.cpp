#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  if (n < 1 || n > 100 || n % 2 == 0) {
    cout << "INPUT ERROR!";
    return;
  }

  int k = n / 2 + 1;
  for (int i = k; i > 1; i--) {
    for (int j = i; j < k; j++) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  for (int i = 1; i <= k; i++) {
    for (int j = 1; j < k; j++) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "*";
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
