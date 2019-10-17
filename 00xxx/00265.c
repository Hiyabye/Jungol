#include <stdio.h>
int main(void) {
  int i, j, n;
  scanf("%d", &n);
  for (i = 0; i < 3; i++) {
    for (j = 1; j <= 3; j++)
      printf("%d * %d = %2d   ", n, i * 3 + j, n * (i * 3 + j));
    printf("\n");
  }
  return 0;
}
