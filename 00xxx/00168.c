#include <stdio.h>
int main(void) {
  int i, j, n, pas[11][11] = {0};

  scanf("%d", &n);

  pas[1][1] = 1;
  for (i = 2; i < 11; i++) {
    for (j = 1; j < 11; j++) {
      pas[i][j] = pas[i - 1][j] + pas[i - 1][j - 1];
    }
  }

  for (i = n; i >= 1; i--) {
    for (j = n; j >= 1; j--) {
      if (pas[i][j] > 0)
        printf("%d ", pas[i][j]);
    }
    printf("\n");
  }
  return 0;
}
