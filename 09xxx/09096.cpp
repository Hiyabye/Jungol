#include <iostream>
using namespace std;

inline double calc(double r) { return 3.14 * r * r; }

void solve(void) {
  cout << "원의 반지름 : ";
  double r;
  cin >> r;

  cout << "원의 넓이\n";
  cout << "버림 : " << (int)calc(r) << "\n";
  cout << "반올림 : " << (int)(calc(r) + 0.5) << "\n";
  cout << "올림 : " << (int)(calc(r) + 1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
