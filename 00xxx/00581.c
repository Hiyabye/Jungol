#include <stdio.h>
double positive(double i);

int main(void) {
  double a, b;
  scanf("%lf %lf", &a, &b);
  if (positive(a) >= positive(b)) printf("%.0lf\n", a);
  else printf("%.0lf\n", b);
  scanf("%lf %lf", &a, &b);
  if (positive(a) <= positive(b)) printf("%.2lf", a);
  else printf("%.2lf", b);
  return 0;
}

double positive(double i) {
  if (i < 0) return -i;
  else return i;
}
