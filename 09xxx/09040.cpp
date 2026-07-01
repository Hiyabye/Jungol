#include <iostream>
using namespace std;

void solve(void) {
  int num = 1, sum = 0;
  while (num <= 10) sum += num++;

  cout << "1부터 10까지의 합 = " << sum << "\n";
  cout << "while문이 끝난 후의 num의 값 = " << num;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
