#include <stdio.h>
int main(void) {
  int i, n, sum = 0;
  for (i = 0; i < 4; i++) {
    scanf("%d", &n);
    sum += n;
  }
  printf("sum %d\navg %d", sum, sum / 4);
  return 0;
}
