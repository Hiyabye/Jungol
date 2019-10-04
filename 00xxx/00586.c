#include <stdio.h>
void macro(int a, int b);

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  macro(a, b);
  return 0;
}

void macro(int a, int b) {
  printf("(%d - %d) ^ 2 = %d\n", a, b, (a - b) * (a - b));
  printf("(%d + %d) ^ 3 = %d", a, b, (a + b) * (a + b) * (a + b));
}
