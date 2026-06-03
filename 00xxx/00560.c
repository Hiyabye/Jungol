#include <stdio.h>
int main(void) {
  int i, n[10], min = 1001;
  for (i = 0; i < 10; i++) {
    scanf("%d", &n[i]);
    if (n[i] < min) min = n[i];
  }
  printf("%d", min);
  return 0;
}
