#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++) cin >> a[i];

  stack<int> s;
  for (int i = 1; i <= n; i++) {
    while (!s.empty() && a[i] <= a[s.top()]) s.pop();
    cout << (s.empty() ? 0 : s.top()) << " ";
    s.push(i);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
