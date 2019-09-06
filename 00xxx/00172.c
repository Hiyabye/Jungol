#include <stdio.h>
void make_square(int n);

int main(void) {
  int n;
  scanf("%d", &n);
  make_square(n);
  return 0;
}

void make_square(int n) {
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      printf("%d ", i * j);
    }
    printf("\n");
  }
}
