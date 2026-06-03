#include <iostream>
using namespace std;

inline bool prime(int n) {
  if (n < 2) return false;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0) return false;
  return true;
}

void solve(void) {
  int n;
  cin >> n;

  if (n == 1) {
    cout << "number one\n";
  } else if (prime(n)) {
    cout << "prime number\n";
  } else {
    cout << "composite number\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 5;
  while (t--) solve();
  return 0;
}
