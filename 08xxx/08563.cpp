#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Person {
  int x;
  double y;
};

inline bool cmp1(const Person &a, const Person &b) {
  if (a.x != b.x) return a.x > b.x;
  return a.y > b.y;
}

inline bool cmp2(const Person &a, const Person &b) {
  if (a.y != b.y) return a.y < b.y;
  return a.x < b.x;
}

inline void print(const vector<Person> &v) {
  for (const auto &p : v) {
    cout << p.x << " " << p.y << (p.y == (int)p.y ? ".0" : "") << "\n";
  }
}

void solve(void) {
  int n;
  cin >> n;
  vector<Person> v(n);
  for (int i = 0; i < n; i++) cin >> v[i].x >> v[i].y;

  sort(v.begin(), v.end(), cmp1);
  print(v);
  cout << "\n";
  sort(v.begin(), v.end(), cmp2);
  print(v);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
