#include <stdio.h>
int main(void) {
  int i, j, a, b;
  scanf("%d %d", &a, &b);
  for (i = 1; i <= a; i++) {
    for (j = 1; j <= b; j++) printf("%d ", j * i);
    printf("\n");
  }
  return 0;
}
