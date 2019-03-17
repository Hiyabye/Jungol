#include <stdio.h>
int main() {
  double a, b;
  int c;
  scanf("%lf\n%lf\n%c", &a, &b, &c);
  printf("%.2lf\n%.2lf\n%c", a, b, c);
  return 0;
}
