#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x;
  cin >> n >> x;
  vector<int> v(n, x);

  char op;
  cin >> op;
  while (op != 'e') {
    if (op == 'i') {
      int a;
      cin >> a;
      v.push_back(a);
    } else if (op == 'r') {
      if (!v.empty()) v.pop_back();
    } else if (op == 's') {
      sort(v.begin(), v.end());
    } else if (op == 't') {
      if (!v.empty()) swap(v.front(), v.back());
    }
    cin >> op;
  }

  for (int x : v) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
