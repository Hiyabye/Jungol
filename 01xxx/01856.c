#include <stdio.h>
int main(void) {
  int i, j, n, m; // n=4, m=5
  scanf("%d %d", &n, &m);
  for (i = 0; i < n / 2; i++) {
    for (j = 1; j <= m; j++)
      printf("%d ", i * m * 2 + j);
    printf("\n");
    for (j = m; j >= 1; j--)
      printf("%d ", m * (i * 2 + 1) + j);
    printf("\n");
  }
  if (n % 2 != 0) {
    i = n / 2;
    for (j = 1; j <= m; j++)
      printf("%d ", i * m * 2 + j);
  }
  return 0;
}
