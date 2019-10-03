#include <stdio.h>
int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a > b)
    printf("A > B ... %d", a - b);
  else if (a < b)
    printf("A < B ... %d", b - a);
  return 0;
}
