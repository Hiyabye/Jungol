#include <stdio.h>
int main(void) {
  int i, a[10], sum = 0, sum2 = 0;
  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
    if (i % 2 == 1) sum += a[i];
    if (i % 2 == 0) sum2 += a[i];
  }
  printf("sum : %d\navg : %.1lf", sum, (double)sum2 / 5);
  return 0;
}
