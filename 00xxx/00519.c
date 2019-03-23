#include <stdio.h>
int main() {
  int a1, b1, helper, a2, b2;
  scanf("%d %d", &a1, &b1);
  a2 = a1 + 100;
  helper = b1 / 10;
  b2 = b1 - helper * 10;
  printf("%d %d", a2, b2);
  return 0;
}
