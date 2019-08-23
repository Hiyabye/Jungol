#include <stdio.h>
double circle(double r) { return r * r * 3.14; }

int main() {
  double r, s;
  scanf("%lf", &r);
  s = circle(r);
  printf("%.2lf", s);
  return 0;
}
