#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;
  while (n--) {
    int x;
    cin >> x;
    pq.push(x);
  }

  int m;
  cin >> m;
  while (m--) {
    int x;
    cin >> x;
    int y = pq.top();
    pq.pop();
    pq.push(x + y);
  }

  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
