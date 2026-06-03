#include <stdio.h>
int arr[4][4] = {0};
void calculate(void);

int main(void) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) scanf("%d", &arr[i][j]);
  }
  calculate();
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) printf("%d ", arr[i][j]);
    printf("\n");
  }
  return 0;
}

void calculate(void) {
  int i;
  for (i = 0; i < 3; i++) {
    arr[0][3] += arr[0][i];
    arr[1][3] += arr[1][i];
    arr[2][3] += arr[2][i];
    arr[3][0] += arr[i][0];
    arr[3][1] += arr[i][1];
    arr[3][2] += arr[i][2];
  }
  for (i = 0; i < 3; i++) arr[3][3] += arr[i][3];
}
