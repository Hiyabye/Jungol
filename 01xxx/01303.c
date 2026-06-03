#include <stdio.h>
int main(void) {
  int i, j, n, m;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++) {
    for (j = 1; j <= m; j++) printf("%d ", i * m + j);
    printf("\n");
  }
  return 0;
}
