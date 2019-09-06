#include <stdio.h>
int main(void) {
  int i, n[10], max2 = 0, min3 = 10000;
  for (i = 0; i < 10; i++) {
    scanf("%d", &n[i]);
    if ((n[i] / 100) > 0) {
      if (n[i] < min3)
        min3 = n[i];
    } else if ((n[i] / 100) == 0) {
      if (n[i] > max2)
        max2 = n[i];
    }
  }
  if (max2 == 0)
    max2 = 100;
  if (min3 == 10000)
    min3 = 100;
  printf("%d %d", max2, min3);
  return 0;
}
