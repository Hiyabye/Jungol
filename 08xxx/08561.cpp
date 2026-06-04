#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  map<string, int> mp;
  string s;
  cin >> s;
  for (int i = 1; s != "end"; i++) {
    mp[s] = i;
    cin >> s;
  }

  cout << mp.size() << "\n";
  for (const auto &[k, v] : mp) { cout << k << " " << v << "\n"; }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
