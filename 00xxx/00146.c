#include <stdio.h>
int main(void) {
  int i, j, n, a = 65, num = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      printf("%c ", a);
      a++;
    }
    for (j = 0; j < i; j++) {
      printf("%d ", num);
      num++;
    }
    printf("\n");
  }
  return 0;
}
