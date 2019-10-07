#include <stdio.h>
int main(void) {
  int n, odd = 0, even = 0;
  scanf("%d", &n);
  while (n != 0) {
    if (n % 2 != 0)
      odd++;
    else
      even++;
    scanf("%d", &n);
  }
  printf("odd : %d\neven : %d", odd, even);
  return 0;
}
