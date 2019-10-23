#include <stdio.h>
int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  a++, b--;
  printf("a = %d, b = %d, c = %d", a, b, a * b);
  return 0;
}
