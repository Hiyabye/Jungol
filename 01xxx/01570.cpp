#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  int x;
  cin >> x;
  cout << x << "\n";

  priority_queue<int> lq;
  priority_queue<int, vector<int>, greater<int>> rq;
  for (int i = 0; i < (n - 1) / 2; i++) {
    int p, q;
    cin >> p >> q;
    if (p < x)
      lq.push(p);
    else
      rq.push(p);
    if (q < x)
      lq.push(q);
    else
      rq.push(q);

    if (lq.size() > rq.size()) {
      int a = lq.top();
      lq.pop();
      rq.push(x);
      x = a;
    } else if (rq.size() > lq.size()) {
      int a = rq.top();
      rq.pop();
      lq.push(x);
      x = a;
    }
    cout << x << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
