#include <iostream>
using namespace std;

void line(void) {
  for (int i = 0; i < 30; i++) cout << "=";
  cout << "\n";
}

void solve(void) {
  line();
  cout << "line 함수를 호출하였습니다.\n";
  cout << "line 함수를 다시 호출합니다. \n";
  line();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
