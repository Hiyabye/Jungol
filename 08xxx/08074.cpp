#include <iostream>
#include <queue>
using namespace std;

struct Data {
  int x, y, z;
};

void solve(void) {
  int n;
  cin >> n;

  queue<Data> q;
  while (n--) {
    char op;
    cin >> op;
    if (op == 'i') {
      Data d;
      cin >> d.x >> d.y >> d.z;
      q.push(d);
    } else if (op == 'o') {
      if (q.empty()) {
        cout << "empty\n";
      } else {
        Data d = q.front();
        cout << d.x << " " << d.y << " " << d.z << "\n";
        q.pop();
      }
    } else if (op == 'c') {
      cout << q.size() << "\n";
    } else if (op == 'z') {
      int a;
      cin >> a;
      cout << (!q.empty() && q.front().z == a ? "yes" : "no") << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
