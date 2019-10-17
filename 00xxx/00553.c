#include <stdio.h>
int main(void) {
  int a = 65, i, j, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = n - i; j > 0; j--) {
      printf("%c", a);
      a++;
    }
    printf("\n");
  }
  return 0;
}
