#include <iostream>
using namespace std;

void solve(void) {
  char a = 'a';
  int b = 1;
  for (int i = 1; i <= 4; i++) {
    for (int j = 0; j < i; j++) cout << a++ << " ";
    for (int j = 0; j < 5 - i; j++) cout << b++ << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
