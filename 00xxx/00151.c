#include <stdio.h>
int main(void) {
  int i, n[5];
  for (i = 0; i < 5; i++) scanf("%d", &n[i]);
  printf("%d", n[0] + n[2] + n[4]);
  return 0;
}
