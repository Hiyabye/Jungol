#include <stdio.h>
int main(void) {
  int i, arr[4][3];
  for (i = 0; i < 4; i++) {
    printf("%dclass? ", i + 1);
    scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
  }
  for (i = 0; i < 4; i++)
    printf("%dclass : %d\n", i + 1, arr[i][0] + arr[i][1] + arr[i][2]);
  return 0;
}
