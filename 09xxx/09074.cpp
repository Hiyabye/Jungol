#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  unordered_map<int, int> mp;
  int x;
  cin >> x;
  while (1 <= x && x <= 10) {
    mp[x]++;
    cin >> x;
  }

  for (int i = 1; i <= 10; i++) {
    if (mp[i]) cout << i << " : " << mp[i] << "개\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
