#include <stdio.h>
int main(void) {
  int i, sum = 0, count = 0;
  while (1) {
    scanf("%d", &i);
    sum += i;
    count++;
    if (i >= 100)
      break;
  }
  printf("%d\n%.1lf", sum, (double)sum / count);
  return 0;
}
