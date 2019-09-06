#include <stdio.h>
int main(void) {
  int i, num[100];
  for (i = 0; i <= 100; i++) {
    scanf("%d", &num[i]);
    if (num[i] == 0)
      break;
  }
  for (; i > 0; i--)
    printf("%d ", num[i - 1]);
  return 0;
}
