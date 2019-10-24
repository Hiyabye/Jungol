#include <stdio.h>
int main(void) {
  int arr1[2][4], arr2[2][4];
  int i, j;

  printf("first array\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++)
      scanf("%d", &arr1[i][j]);
  }

  printf("second array\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++)
      scanf("%d", &arr2[i][j]);
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++)
      printf("%d ", arr1[i][j] * arr2[i][j]);
    printf("\n");
  }
  return 0;
}
