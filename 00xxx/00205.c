#include <stdio.h>
int main(void) {
  double a, b, c;
  scanf("%lf %lf", &a, &b);
  c = a + b;
  printf("%.2lf %.2lf %.2lf", a, b, c);
  return 0;
}
