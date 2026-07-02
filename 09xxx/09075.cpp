#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  vector<int> v(10, 0);
  while (n) {
    v[n % 10]++;
    cin >> n;
  }

  for (int i = 0; i < 10; i++) {
    if (!v[i]) continue;
    cout << i << " : " << v[i] << "개\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
