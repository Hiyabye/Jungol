#include <stdio.h>
int main() {
  int i, j;
  scanf("%d", &i);
  for (j = 2; j <= i; j = j + 2) { printf("%d ", j); }
  return 0;
}
