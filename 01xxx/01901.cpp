#include <iostream>
#include <vector>
using namespace std;

inline vector<bool> precompute(int n) {
  vector<bool> p(n + 1, true);
  p[0] = p[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (!p[i]) continue;
    for (int j = i * i; j <= n; j += i) p[j] = false;
  }
  return p;
}

void solve(const vector<bool> &p) {
  int m;
  cin >> m;

  int d = 0;
  while (!p[m - d] && !p[m + d]) d++;

  if (d == 0) cout << m;
  else if (p[m - d] && p[m + d]) cout << m - d << " " << m + d;
  else if (p[m - d]) cout << m - d;
  else cout << m + d;
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<bool> p = precompute(1010101);

  int n;
  cin >> n;
  while (n--) solve(p);
  return 0;
}
