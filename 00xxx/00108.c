#include <stdio.h>
int main() {
  int a;
  double b, c;
  a = 50, b = 100.12;
  c = a * b;
  printf("%.2lf * %d = %.0lf", b, a, c);
  return 0;
}
