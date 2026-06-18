#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int t, n;
  cin >> t >> n;

  int sum = 0;
  while (t--) {
    string s;
    int x;
    cin >> s >> x;
    sum += x;
  }
  cout << 3 * n - sum;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
