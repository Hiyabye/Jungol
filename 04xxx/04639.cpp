#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int q;
  cin >> q;

  set<int> s;
  while (q--) {
    char op;
    cin >> op;
    if (op == 'i') {
      int val;
      cin >> val;
      s.insert(val);
    } else if (op == 'r') {
      int val;
      cin >> val;
      s.erase(val);
    } else if (op == 'f') {
      int val;
      cin >> val;
      auto it = s.find(val);
      if (it == s.end()) {
        cout << "NOPE\n";
      } else {
        auto n = s.find(val);
        if (n == s.begin()) {
          if (++n == s.end()) {
            cout << "UNIQUE\n";
          } else {
            cout << *n << "\n";
          }
        } else {
          auto p = n;
          if (++n == s.end()) {
            cout << *--p << "\n";
          } else {
            cout << (val - *--p <= *n - val ? *p : *n) << "\n";
          }
        }
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
