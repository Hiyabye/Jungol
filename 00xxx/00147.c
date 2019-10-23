#include <stdio.h>
int main(void) {
  int n, i, j, num = 1;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < i; j++)
      printf("  ");
    for (j = i; j < n; j++) {
      printf("%d ", num);
      num++;
    }
    printf("\n");
  }
  return 0;
}
