#include <stdio.h>
int main(void) {
  int i, n, even = 0, odd = 0;
  for (i = 0; i < 10; i++) {
    scanf("%d", &n);
    if (n % 2 == 0) even++;
    else odd++;
  }
  printf("even : %d\nodd : %d", even, odd);
  return 0;
}
