#include <stdio.h>
int main() {
  int i, j, arr[4][2], sum = 0;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &arr[i][j]);
      sum += arr[i][j];
    }
  }

  for (i = 0; i < 4; i++) printf("%d ", (arr[i][0] + arr[i][1]) / 2);
  printf("\n");

  for (i = 0; i < 2; i++)
    printf("%d ", (arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i]) / 4);
  printf("\n");

  printf("%d", sum / 8);
  return 0;
}
