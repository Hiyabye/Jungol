#include <stdio.h>
int main() {
  int a, sum = 0;
  scanf("%d", &a);
  while (a > 0) {
    sum += a;
    a--;
  }
  printf("%d", sum);
  return 0;
}
