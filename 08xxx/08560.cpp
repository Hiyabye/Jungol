#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Data {
  string name;
  int age;
};

inline bool cmp(const Data &x, const Data &y) {
  if (x.age != y.age) return x.age > y.age;
  return x.name < y.name;
}

void solve(void) {
  vector<Data> v(10);
  for (int i = 0; i < 10; i++) cin >> v[i].name >> v[i].age;
  sort(v.begin(), v.end(), cmp);

  for (const auto &x : v) cout << x.name << " " << x.age << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
