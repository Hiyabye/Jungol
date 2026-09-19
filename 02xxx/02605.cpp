#include <iostream>
#include <vector>
using namespace std;

struct Person {
  int x;
  int y;
  int rank;
  bool operator<(const Person &p) const { return x < p.x && y < p.y; }
};

void solve(void) {
  int n;
  cin >> n;
  vector<Person> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i].x >> p[i].y;
    p[i].rank = 1;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (p[i] < p[j]) p[i].rank++;
    }
  }

  for (int i = 0; i < n; i++) cout << p[i].rank << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
