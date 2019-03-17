#include <stdio.h>
int main() {
  int a, b, c, sum, avg;
  scanf("%d %d %d", &a, &b, &c);
  sum = a + b + c;
  avg = sum / 3;
  printf("sum : %d\navg : %d", sum, avg);
  return 0;
}
