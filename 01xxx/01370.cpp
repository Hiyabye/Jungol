#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Meeting {
  int id;
  int start;
  int end;
};

inline bool cmp(const Meeting &a, const Meeting &b) {
  if (a.end != b.end) return a.end < b.end;
  return a.start < b.start;
}

void solve(void) {
  int n;
  cin >> n;
  vector<Meeting> m(n);
  for (int i = 0; i < n; i++) cin >> m[i].id >> m[i].start >> m[i].end;
  sort(m.begin(), m.end(), cmp);

  int end = 0;
  vector<Meeting> ans;
  for (int i = 0; i < n; i++) {
    if (m[i].start >= end) {
      ans.push_back(m[i]);
      end = m[i].end;
    }
  }

  cout << ans.size() << "\n";
  for (const Meeting &m : ans) cout << m.id << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
