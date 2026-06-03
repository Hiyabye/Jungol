#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    v[i] = s.length();
  }

  long long ans = 0;
  vector<int> cnt(21, 0);
  for (int i = 0; i < k; i++) { ans += cnt[v[i]]++; }
  for (int i = k; i < n; i++) {
    ans += cnt[v[i]]++;
    cnt[v[i - k]]--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
