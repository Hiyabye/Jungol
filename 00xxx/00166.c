#include <stdio.h>
int main(void) {
  int i, j, arr1[2][3], arr2[2][3];

  printf("first array\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++)
      scanf("%d", &arr1[i][j]);
  }

  printf("second array\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++)
      scanf("%d", &arr2[i][j]);
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++)
      printf("%d ", arr1[i][j] * arr2[i][j]);
    printf("\n");
  }
  return 0;
}
