#include <algorithm>
#include <iostream>
using namespace std;

inline void one(int x, int y) {
  swap(x, y);
  cout << "첫 번째 함수 실행중 x = " << x << ", y = " << y << "\n";
}

inline void two(int &x, int &y) {
  swap(x, y);
  cout << "두 번째 함수 실행중 x = " << x << ", y = " << y << "\n";
}

void solve(void) {
  cout << "두 수를 입력하세요. " << flush;
  int a, b;
  cin >> a >> b;

  one(a, b);
  cout << "첫 번째 함수 실행후 a = " << a << ", b = " << b << "\n";

  two(a, b);
  cout << "두 번째 함수 실행후 a = " << a << ", b = " << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
