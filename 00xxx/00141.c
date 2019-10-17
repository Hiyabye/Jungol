#include <stdio.h>
int main(void) {
  int i, n;
  scanf("%d", &n);
  for (i = 1; i <= 10; i++) {
    if (n * i >= 100)
      break;
    if ((n * i) % 10 == 0) {
      printf("%d ", n * i);
      break;
    }
    printf("%d ", n * i);
  }
  return 0;
}
