#include <stdio.h>
int main(void) {
  int i, j, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < i; j++) printf(" ");
    for (j = (n - i) * 2 - 1; j > 0; j--) printf("*");
    for (j = 0; j < i; j++) printf(" ");
    printf("\n");
  }
  return 0;
}
