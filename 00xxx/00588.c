#include <stdio.h>
void num_down(int n);

int main(void) {
  int n;
  scanf("%d", &n);
  num_down(n);
  return 0;
}

void num_down(int n) {
  int i;
  for (i = n; i > 0; i--)
    printf("%d ", i);
}
