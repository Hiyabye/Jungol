#include <stdio.h>
int main(void) {
  double a, b;
  scanf("%lf %lf", &a, &b);
  printf("%d %d", (int)(a * b), (int)a * (int)b);
  return 0;
}
