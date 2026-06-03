#include <iostream>
#include <unordered_set>
using namespace std;

bool solve(void) {
  int n;
  cin >> n;
  unordered_set<int> s;
  while (n--) {
    int a;
    cin >> a;
    s.insert(10000 - a);
  }

  bool ans = false;

  int m;
  cin >> m;
  while (m--) {
    int b;
    cin >> b;
    if (s.find(b) != s.end())
      ans = true;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 4;
  while (t--)
    cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}
