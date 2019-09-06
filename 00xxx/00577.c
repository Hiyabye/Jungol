#include <stdio.h>
void print_num(int a, int b);

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  print_num(a, b);
  return 0;
}

void print_num(int a, int b) {
  int big, small;
  if (a >= b)
    a = a / 2, b = b * 2;
  else
    b = b / 2, a = a * 2;
  printf("%d %d", a, b);
}
