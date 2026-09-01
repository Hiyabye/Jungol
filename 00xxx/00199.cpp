#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
  string s;
  int a, b, c;
};

bool cmp(const Person &p, const Person &q) {
  return p.a + p.b + p.c > q.a + q.b + q.c;
}

void solve(void) {
  int n;
  cin >> n;
  vector<Person> v(n);
  for (int i = 0; i < n; i++) cin >> v[i].s >> v[i].a >> v[i].b >> v[i].c;
  sort(v.begin(), v.end(), cmp);

  for (int i = 0; i < n; i++) {
    cout << v[i].s << " " << v[i].a << " " << v[i].b << " " << v[i].c << " "
         << v[i].a + v[i].b + v[i].c << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
