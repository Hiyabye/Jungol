#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  int ans1 = 0, ans2 = 0;
  while (n--) {
    int a, b;
    cin >> a >> b;
    ans1 += (a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1);
    ans2 += (a == 2 && b == 1) || (a == 3 && b == 2) || (a == 1 && b == 3);
  }
  cout << max(ans1, ans2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
