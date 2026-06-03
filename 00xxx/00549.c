#include <stdio.h>
int main(void) {
  int i, n, sum = 0;
  scanf("%d", &n);
  for (i = 1; i < n; i += 2) {
    sum += i;
    if (sum >= n) break;
  }
  printf("%d %d", (i + 1) / 2, sum);
  return 0;
}
