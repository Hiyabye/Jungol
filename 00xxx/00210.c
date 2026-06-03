#include <stdio.h>
int main(void) {
  int a;
  scanf("%d", &a);
  int i, j;
  for (i = 0; i < a; i++) {
    for (j = 0; j < a - i - 1; j++) printf("  ");
    for (j = 0; j < (i + 1) * 2 - 1; j++) printf("* ");
    printf("\n");
  }
  for (i = 0; i < a - 1; i++) {
    for (j = 0; j < i + 1; j++) printf("  ");
    for (j = 0; j < (a - i - 1) * 2 - 1; j++) printf("* ");
    printf("\n");
  }
  return 0;
}
