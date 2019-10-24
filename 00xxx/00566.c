#include <stdio.h>
int main(void) {
  int a = 100, b, temp;
  scanf("%d", &b);
  while (a >= 0) {
    printf("%d ", a);
    temp = a - b;
    a = b;
    b = temp;
  }
  printf("%d", a);
  return 0;
}
