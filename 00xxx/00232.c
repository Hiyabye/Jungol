#include <stdio.h>
int main(void) {
  int i, n;

  scanf("%d", &n);

  if (n % 2 == 1) {
    for (i = 1; i <= n; i += 2) printf("%d ", i);
  } else {
    for (i = 2; i <= n; i += 2) printf("%d ", i);
  }
  return 0;
}
