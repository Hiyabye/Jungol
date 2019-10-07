#include <stdio.h>
int main(void) {
  int a, i, n, sum = 0;
  scanf("%d", &a);
  for (i = 0; i < a; i++) {
    scanf("%d", &n);
    sum += n;
  }
  printf("%.2lf", (double)sum / a);
  return 0;
}
