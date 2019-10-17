#include <stdio.h>
int main(void) {
  int i, j, n, x = 1, y = 65;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = n - i; j > 0; j--) {
      printf("%d ", x);
      x++;
    }
    for (j = 0; j <= i; j++) {
      printf("%c ", y);
      y++;
    }
    printf("\n");
  }
  return 0;
}
