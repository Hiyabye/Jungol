#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int q;
  cin >> q;

  unordered_map<int, int> mp;
  while (q--) {
    char op;
    cin >> op;
    if (op == 'f') {
      int x;
      cin >> x;
      if (mp.find(x) == mp.end()) cout << "NO\n";
      else cout << "YES " << mp[x] << "\n";
    } else if (op == 'a') {
      int x;
      cin >> x;
      mp[x]++;
    } else if (op == 'c') {
      cout << mp.size() << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
