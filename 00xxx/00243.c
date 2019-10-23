#include <stdio.h>
int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("a = %d\na = %d\na = %d\nb = %d", a, a - b, a - b * 2, b);
  return 0;
}
