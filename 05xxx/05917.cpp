#include <iostream>
#include <stack>
using namespace std;

void solve(void) {
  int n, t;
  cin >> n >> t;
  stack<int> s1, s2, s3;
  while (n--) s1.push(n + 1);

  while (t--) {
    int c, d;
    cin >> c >> d;
    if (c == 1) {
      while (d--) {
        s2.push(s1.top());
        s1.pop();
      }
    } else if (c == 2) {
      while (d--) {
        s3.push(s2.top());
        s2.pop();
      }
    }
  }

  while (!s3.empty()) {
    cout << s3.top() << "\n";
    s3.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
