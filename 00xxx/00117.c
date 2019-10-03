#include <stdio.h>
int main(void) {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  printf("sum %d\navg %d", (int)a + (int)b + (int)c, (int)((a + b + c) / 3));
  return 0;
}
