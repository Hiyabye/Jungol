#include <stdio.h>
int main() {
  int i, sum;
  scanf("%d", &i);
  for (sum = 0; i <= 100; i++) { sum = sum + i; }
  printf("%d", sum);
  return 0;
}
