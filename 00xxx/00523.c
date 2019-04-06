#include <stdio.h>
int main() {
  int a, b, c, d, e, f;
  scanf("%d %d", &a, &b);
  if (a >= b) {
    d = 0;
    if (a > b) // if a>b
    {
      c = 1, e = 1, f = 0;
    } else // if a=b
    {
      c = 0, e = 1, f = 1;
    }
  } else // if a<b
  {
    c = 0, d = 1, e = 0, f = 1;
  }
  printf("%d > %d --- %d\n", a, b, c);
  printf("%d < %d --- %d\n", a, b, d);
  printf("%d >= %d --- %d\n", a, b, e);
  printf("%d <= %d --- %d", a, b, f);
  return 0;
}
