#include <stdio.h>
int main(void) {
  int s, e;
  int i, j;

  scanf("%d %d", &s, &e);
  while (s < 2 || s > 9 || e < 2 || e > 9) {
    printf("INPUT ERROR!\n");
    scanf("%d %d", &s, &e);
  }

  if (s <= e) {
    for (i = 1; i <= 9; i++) {
      for (j = s; j <= e; j++) { printf("%d * %d = %2d   ", j, i, j * i); }
      printf("\n");
    }
  } else {
    for (i = 1; i <= 9; i++) {
      for (j = s; j >= e; j--) { printf("%d * %d = %2d   ", j, i, j * i); }
      printf("\n");
    }
  }

  return 0;
}
