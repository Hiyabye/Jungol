#include <stdio.h>
int main(void) {
  int i, n, sum = 0;
  scanf("%d", &n);
  for (i = 0; i <= n; i += 5) {
    if (i % 5 == 0) sum += i;
  }
  printf("%d", sum);
  return 0;
}
