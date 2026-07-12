#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> v;
  while (n) {
    v.push_back(n);
    cin >> n;
  }

  for (int i = 1; i < v.size(); i += 2) cout << v[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
