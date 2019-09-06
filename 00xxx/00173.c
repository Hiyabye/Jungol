#include <stdio.h>
void subtract(int a, int b);

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a >= b)
    subtract(a, b);
  else
    subtract(b, a);
  return 0;
}

void subtract(int a, int b) { printf("%d", (a * a) - (b * b)); }
