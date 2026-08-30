#include <iomanip>
#include <iostream>
using namespace std;

struct Person {
  double h, w;
};

void solve(void) {
  Person d, m;
  cin >> d.h >> d.w >> m.h >> m.w;

  cout << "height : " << fixed << setprecision(0) << (d.h + m.h + 9.9) / 2
       << "cm\n";
  cout << "weight : " << fixed << setprecision(1) << (d.w + m.w - 9.0) / 2
       << "kg";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
