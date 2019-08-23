#include <math.h>
#include <stdio.h>
int times(int a, int b);

int main() {
  int a, b, num;
  scanf("%d %d", &a, &b);
  num = times(a, b);
  printf("%d", num);
  return 0;
}

int times(int a, int b) { return pow(a, b); }
