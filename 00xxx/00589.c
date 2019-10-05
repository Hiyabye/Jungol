#include <stdio.h>
int add(int n);

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d", add(n));
  return 0;
}

int add(int n) {
  int i, sum = 0;
  for (i = 0; i <= n; i++)
    sum += i;
  return sum;
}
