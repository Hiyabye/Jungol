#include <stdio.h>
int main(void) {
  int n, i, j, num = 1;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", num);
      num += 2;
      if (num > 9) num %= 10;
    }
    printf("\n");
  }
}
