#include <math.h>
#include <stdio.h>
int main(void) {
  int i;
  double num[10], result;
  for (i = 0; i < 10; i++) { scanf("%lf", &num[i]); }
  result = floor((num[0] + num[9]) / 2 * 10 + 0.5);
  printf("%.1lf", result / 10);
  return 0;
}
