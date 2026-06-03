#include <stdio.h>
int main(void) {
  double c;
  while (1) {
    scanf("%lf", &c);
    if (c == 0) break;
    printf("%.2lf\n", c / 6.28);
  }
  return 0;
}
