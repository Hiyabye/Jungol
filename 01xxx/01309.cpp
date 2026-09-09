#include <iostream>
using namespace std;

inline long long f(int n) {
  if (n == 1) {
    cout << "1! = 1\n";
    return 1LL;
  } else {
    cout << n << "! = " << n << " * " << n - 1 << "!\n";
    return f(n - 1) * n;
  }
}

void solve(void) {
  int n;
  cin >> n;

  cout << f(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
