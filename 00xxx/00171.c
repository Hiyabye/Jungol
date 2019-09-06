#include <stdio.h>
int calculate(int n);

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d", calculate(n));
  return 0;
}

int calculate(int n) {
  int i, result = 0;
  for (i = 1; i <= n; i++) {
    result = result + i;
  }
  return result;
}
