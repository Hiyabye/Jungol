#include <iostream>
using namespace std;

struct Rect {
  int w, h;
} a, b, c, d;

void solve(void) {
  cin >> a.w >> a.h;
  cin >> b.w >> b.h;
  cin >> c.w >> c.h;
  cin >> d.w >> d.h;

  if ((a.w + b.w) * (a.h + b.h) == (c.w + d.w) * (c.h + d.h)) {
    cout << "Same";
  } else if ((a.w + b.w) * (a.h + b.h) < (c.w + d.w) * (c.h + d.h)) {
    cout << "Left Small";
  } else {
    cout << "Right Small";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
