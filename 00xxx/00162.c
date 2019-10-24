#include <stdio.h>
int main(void) {
  int i, arr[10];
  scanf("%d %d", &arr[0], &arr[1]);
  printf("%d %d ", arr[0], arr[1]);
  for (i = 2; i < 10; i++) {
    arr[i] = arr[i - 2] + arr[i - 1];
    if (arr[i] >= 10)
      arr[i] %= 10;
    printf("%d ", arr[i]);
  }
  return 0;
}
