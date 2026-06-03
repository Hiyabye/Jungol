#include <stdio.h>
int main(void) {
  int i, j, arr[20], sum = 0;
  for (i = 0; i < 20; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] == 0) {
      break;
      i--;
    }
  }
  for (j = 0; j < i; j++) sum += arr[j];
  printf("%d %d", sum, sum / i);
  return 0;
}
