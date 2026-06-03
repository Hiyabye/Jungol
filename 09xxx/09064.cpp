#include <iostream>
using namespace std;

void solve(void) {
  int a[5];
  for (int i = 0; i < 5; i++)
    cin >> a[i];

  for (int i = 0; i < 5; i++)
    cout << a[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
