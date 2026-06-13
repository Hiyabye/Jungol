#include <iostream>
using namespace std;

void solve(void) {
  for (int i = 1; i <= 9; i++) {
    cout << "2 * " << i << (2 * i < 10 ? " =  " : " = ") << 2 * i << "   ";
    cout << "3 * " << i << (3 * i < 10 ? " =  " : " = ") << 3 * i << "   ";
    cout << "4 * " << i << (4 * i < 10 ? " =  " : " = ") << 4 * i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
