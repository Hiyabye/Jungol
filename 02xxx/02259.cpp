#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k;
  cin >> k;
  vector<int> d(6), l(6);
  for (int i = 0; i < 6; i++) cin >> d[i] >> l[i];

  int aw = 0, ah = 0, widx = 0, hidx = 0;
  for (int i = 0; i < 6; i++) {
    if (d[i] == 1 || d[i] == 2) {
      if (l[i] > aw) aw = l[i], widx = i;
    } else if (d[i] == 3 || d[i] == 4) {
      if (l[i] > ah) ah = l[i], hidx = i;
    }
  }
  int bw = abs(l[(hidx + 1) % 6] - l[(hidx + 5) % 6]);
  int bh = abs(l[(widx + 1) % 6] - l[(widx + 5) % 6]);

  cout << (aw * ah - bw * bh) * k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
