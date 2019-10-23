#include <stdio.h>
int main(void) {
  int i, num[100], max = -1000, min = 1000;
  for (i = 0; i < 100; i++) {
    scanf("%d", &num[i]);
    if (num[i] == 999)
      break;
    if (num[i] > max)
      max = num[i];
    if (num[i] < min)
      min = num[i];
  }
  printf("max : %d\nmin : %d", max, min);
  return 0;
}
