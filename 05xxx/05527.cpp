#include <iostream>
#include <queue>
#include <string>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  int sum = 0;
  queue<int> q;
  while (n--) {
    string op;
    cin >> op;
    if (op == "call") {
      int x;
      cin >> x;
      q.push(x);
      sum += x;
    } else if (op == "wait") {
      int x;
      cin >> x;
      while (x--) {
        if (!q.empty()) {
          q.front()--;
          sum--;
          if (q.front() == 0) q.pop();
        }
      }
    } else if (op == "check") {
      cout << q.size() << " people " << sum << " minutes\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
