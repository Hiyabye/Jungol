#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<int> cnt(10, 0);
  while (n) {
    cnt[n / 10]++;
    cin >> n;
  }

  for (int i = 0; i < 10; i++) {
    if (cnt[i]) cout << i << " : " << cnt[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
