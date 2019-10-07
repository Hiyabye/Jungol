#include <stdio.h>
int main(void) {
  int n, sum = 0, count = 0;
  scanf("%d", &n);
  while (n >= 0 && n <= 100) {
    sum += n;
    count++;
    scanf("%d", &n);
  }
  printf("sum : %d\navg : %.1lf", sum, (double)sum / count);
  return 0;
}
