#include <stdio.h>
int calculate(int n);
int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d", calculate(n));
  return 0;
}

int calculate(int n) {
  int i, result = 1;
  for (i = 0; i < n; i++) result *= 2;
  return result;
}
