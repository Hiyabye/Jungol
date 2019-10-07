#include <stdio.h>
int main(void) {
  int a, b, temp, sum = 0, count = 0;
  scanf("%d %d", &a, &b);
  if (a >= b) {
    temp = a;
    a = b;
    b = temp;
  }
  for (; a <= b; a++) {
    if (a % 3 == 0 || a % 5 == 0) {
      sum += a;
      count++;
    }
  }
  printf("sum : %d\navg : %.1lf", sum, (double)sum / count);
  return 0;
}
