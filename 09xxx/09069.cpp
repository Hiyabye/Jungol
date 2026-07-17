#include <iostream>
using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

inline bool leap(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

void solve(void) {
  int y, m;

  while (true) {
    cout << "YEAR = ";
    cin >> y;
    cout << "MONTH = ";
    cin >> m;
    if (m == 0) break;
    if (m < 1 || m > 12) cout << "잘못 입력하였습니다.";
    else if (leap(y) && m == 2) cout << "입력하신 달의 날 수는 29일입니다.";
    else cout << "입력하신 달의 날 수는 " << days[m] << "일입니다.";
    cout << "\n\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
