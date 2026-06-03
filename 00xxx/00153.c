#include <stdio.h>
int main(void) {
  int i, j, num[100];
  for (i = 0; i < 100; i++) {
    scanf("%d", &num[i]);
    if (num[i] == -1) break;
  }
  if (i < 3) {
    for (j = 0; j < i; j++) printf("%d ", num[j]);
  } else {
    for (j = i - 3; j < i; j++) printf("%d ", num[j]);
  }
  return 0;
}
