#include <stdio.h>
int main(void) {
  int i, j, k, a, b;
  scanf("%d %d", &a, &b);
  if (a > b) {
    for (i = a; i >= b; i--) {
      for (j = 0; j < 3; j++) {
        for (k = 1; k <= 3; k++)
          printf("%d * %d = %2d   ", i, j * 3 + k, i * (j * 3 + k));
        printf("\n");
      }
      printf("\n");
    }
  } else {
    for (i = a; i <= b; i++) {
      for (j = 0; j < 3; j++) {
        for (k = 1; k <= 3; k++)
          printf("%d * %d = %2d   ", i, j * 3 + k, i * (j * 3 + k));
        printf("\n");
      }
      printf("\n");
    }
  }
  return 0;
}
