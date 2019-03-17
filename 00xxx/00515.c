#include <stdio.h>
int main() {
  int a, b, c, d;
  scanf("%d %d", &a, &b);
  c = a * b;
  d = a / b;
  printf("%d * %d = %d\n", a, b, c);
  printf("%d / %d = %d", a, b, d);
  return 0;
}
