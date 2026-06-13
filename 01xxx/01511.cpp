#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline string add(string a, string b) {
  int sz = max(a.length(), b.length()), carry = 0;
  string c;
  c.reserve(sz + 1);
  for (int i = 0; i < sz; i++) {
    int x = carry;
    if (i < (int)a.length()) x += a[i] - '0';
    if (i < (int)b.length()) x += b[i] - '0';
    c += x % 10 + '0';
    carry = x / 10;
  }
  if (carry) c += carry + '0';
  return c;
}

inline vector<string> precompute(int n) {
  vector<string> f(n + 1, "0");
  f[1] = "1";
  for (int i = 2; i <= n; i++) f[i] = add(f[i - 1], f[i - 2]);
  return f;
}

void solve(const vector<string> &f) {
  int n;
  cin >> n;

  string ans = f[n];
  reverse(ans.begin(), ans.end());
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<string> f = precompute(5000);

  int t;
  cin >> t;
  while (t--) solve(f);
  return 0;
}
