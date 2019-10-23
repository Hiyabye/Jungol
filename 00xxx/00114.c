#include <stdio.h>
int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  a++;
  printf("%d %d\n", a, b);
  b--;
  printf("%d %d", a, b);
  return 0;
}
