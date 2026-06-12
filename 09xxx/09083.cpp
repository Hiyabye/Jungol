#include <iostream>
using namespace std;

inline int up(int n) { return n + 10; }
inline int down(int n) { return n - 10; }

void solve(void) {
  int n;
  cin >> n;

  cout << "10큰수 : " << up(n) << "\n" << "10작은수 : " << down(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
