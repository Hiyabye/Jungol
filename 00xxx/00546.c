#include <stdio.h>
int main(void) {
  int i, n, num, sum = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &num);
    sum += num;
  }
  printf("avg : %.1lf\n", (double)sum / n);
  if ((double)sum / n >= 80)
    printf("pass");
  else
    printf("fail");
  return 0;
}
