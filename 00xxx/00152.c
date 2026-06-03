#include <stdio.h>
int main(void) {
  int i, n[10], odd = 0, even = 0;
  for (i = 0; i < 10; i++) {
    scanf("%d", &n[i]);
    if (i % 2 == 0) odd += n[i];
    if (i % 2 == 1) even += n[i];
  }
  printf("odd : %d\neven : %d", odd, even);
  return 0;
}
