#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  queue<int> q;
  while (n--) {
    char op;
    cin >> op;
    if (op == 'i') {
      int a;
      cin >> a;
      q.push(a);
    } else if (op == 'o') {
      if (q.empty()) {
        cout << "empty\n";
      } else {
        cout << q.front() << "\n";
        q.pop();
      }
    } else if (op == 'c') {
      cout << q.size() << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
