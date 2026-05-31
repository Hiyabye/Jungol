#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int x, y;
  cin >> x >> y;

  sort(a.begin() + x, a.begin() + y + 1);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";

  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
