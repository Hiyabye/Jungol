#include <stdio.h>
int main(void) {
  int i, j, n;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (j = 0; j < (n - i) * 2; j++)
      printf(" ");
    for (j = (i - 1) * 2 + 1; j > 0; j--)
      printf("*");
    printf("\n");
  }
  return 0;
}
