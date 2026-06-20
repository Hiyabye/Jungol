#include <iostream>
#include <stack>
using namespace std;

void solve(void) {
  int m; cin >> m;

  stack<int> s;
  while (m--) {
    char x; cin >> x;
    switch (x) {
      case '+': {
        int b = s.top(); s.pop();
        int a = s.top(); s.pop();
        s.push(a + b);
        break;
      }
      case '-': {
        int b = s.top(); s.pop();
        int a = s.top(); s.pop();
        s.push(a - b);
        break;
      }
      case '*': {
        int b = s.top(); s.pop();
        int a = s.top(); s.pop();
        s.push(a * b);
        break;
      }
      case '/': {
        int b = s.top(); s.pop();
        int a = s.top(); s.pop();
        s.push(a / b);
        break;
      }
      default: {
        s.push(x - '0');
        break;
      }
    }
  }
  cout << s.top();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
