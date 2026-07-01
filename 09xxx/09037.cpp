#include <iostream>
using namespace std;

void solve(void) {
  cout << "점수를 입력하세요. ";
  int n;
  cin >> n;

  if (n >= 90) cout << 'A';
  else if (n >= 80) cout << 'B';
  else if (n >= 70) cout << 'C';
  else if (n >= 60) cout << 'D';
  else cout << 'F';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
