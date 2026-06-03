#include <stdio.h>
int main(void) {
  int i, j;
  char arr[3][5];

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) scanf(" %c", &arr[i][j]);
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) printf("%c ", arr[i][j] + 32);
    printf("\n");
  }
  return 0;
}
