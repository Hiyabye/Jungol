#include <stdio.h>
int main(void) {
  int i, n, num[6] = {0};
  for (i = 0; i < 10; i++) {
    scanf("%d", &n);
    num[n - 1]++;
  }
  for (i = 0; i < 6; i++) printf("%d : %d\n", i + 1, num[i]);
  return 0;
}
