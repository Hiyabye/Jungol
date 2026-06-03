#include <stdio.h>
void multiply(int n);

int main(void) {
  int a, b, save;
  scanf("%d %d", &a, &b);
  if (a >= b) {
    save = a;
    a = b;
    b = save;
  }
  for (; a <= b; a++) { multiply(a); }
  return 0;
}

void multiply(int n) {
  int i;
  printf("== %ddan ==\n", n);
  for (i = 1; i <= 9; i++) printf("%d * %d = %2d\n", n, i, n * i);
  printf("\n");
}
