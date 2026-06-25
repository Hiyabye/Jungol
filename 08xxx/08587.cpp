#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

struct Person {
  string name;
  int age;
  double blood;
};

inline bool cmp(const Person &a, const Person &b) {
  if (a.blood != b.blood) return a.blood < b.blood;
  if (a.age != b.age) return a.age < b.age;
  return a.name < b.name;
}

void solve(void) {
  int q;
  cin >> q;

  priority_queue<Person, vector<Person>, decltype(&cmp)> pq(cmp);
  while (q--) {
    string op;
    cin >> op;
    if (op == "push") {
      Person p;
      cin >> p.name >> p.age >> p.blood;
      pq.push(p);
    } else if (op == "pop" && !pq.empty()) {
      Person p = pq.top();
      pq.pop();
      cout << p.name << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
