#include <iostream>
#include <stack>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  stack<int> s;
  while (n--) {
    int x;
    cin >> x;
    while (!s.empty() && s.top() >= x) s.pop();
    cout << (s.empty() ? 0 : s.top()) << " ";
    s.push(x);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
