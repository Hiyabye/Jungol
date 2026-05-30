#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v(5);
  for (int i = 0; i < 5; i++)
    cin >> v[i];

  int mx = 0;
  for (int i = 0; i < 5; i++) {
    mx = max(mx, (int)v[i].length());
  }

  for (int i = 0; i < mx; i++) {
    for (int j = 0; j < 5; j++) {
      if (i < v[j].length()) {
        cout << v[j][i];
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
