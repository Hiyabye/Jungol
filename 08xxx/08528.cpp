#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int q;
  cin >> q;

  multiset<int> s;
  while (q--) {
    char op;
    cin >> op;
    if (op == 'i') {
      int x;
      cin >> x;
      s.insert(x);
    } else if (op == 'r') {
      int x;
      cin >> x;
      auto it = s.find(x);
      if (it != s.end()) {
        s.erase(it);
      }
    } else if (op == 'e') {
      int x;
      cin >> x;
      s.erase(x);
    }
  }

  for (int x : s) {
    cout << x << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
