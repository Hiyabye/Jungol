#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
  string name;
  int height;
  float weight;
};

bool cmp(const Person &a, const Person &b) { return a.height < b.height; }

void solve(void) {
  vector<Person> v(5);
  for (int i = 0; i < 5; i++) cin >> v[i].name >> v[i].height >> v[i].weight;
  sort(v.begin(), v.end(), cmp);

  for (int i = 0; i < 5; i++) {
    cout << v[i].name << " " << v[i].height << " " << v[i].weight << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
