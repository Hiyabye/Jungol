#include <stdio.h>
int main(void) {
  int i, j, n[10], temp;
  for (i = 0; i < 10; i++)
    scanf("%d", &n[i]);
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      if (n[j] > n[j + 1]) {
        temp = n[j];
        n[j] = n[j + 1];
        n[j + 1] = temp;
      }
    }
  }
  for (i = 9; i >= 0; i--) {
    printf("%d ", n[i]);
  }
  return 0;
}
