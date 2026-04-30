#include <iostream>
using namespace std;

void solve(void) {
  cout << "수를 출력할 때는 따옴표를 생략합니다.\n";
  cout << "123\n";
  cout << "6.500000";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
