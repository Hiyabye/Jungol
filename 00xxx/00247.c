#include <stdio.h>
int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a != 0 && b != 0 && c != 0)
    printf("1");
  else
    printf("0");
  return 0;
}
