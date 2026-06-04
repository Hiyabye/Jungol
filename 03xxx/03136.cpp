#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<vector<long long>> a(n + 1, vector<long long>(n + 1, 0));
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++) cin >> a[i][j];

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
    }
  }

  int q;
  cin >> q;
  while (q--) {
    int sr, sc, er, ec;
    cin >> sr >> sc >> er >> ec;
    cout << a[er][ec] - a[sr - 1][ec] - a[er][sc - 1] + a[sr - 1][sc - 1]
         << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
