#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  cout << "키를 입력하세요. ";
  int a;
  cin >> a;

  cout << "몸무게를 입력하세요. ";
  float b;
  cin >> b;

  cout << "이름을 입력하세요. ";
  char c;
  cin >> c;

  cout << "키 = " << a;
  cout << "\n몸무게 = " << fixed << setprecision(1) << b;
  cout << "\n이름 = " << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
