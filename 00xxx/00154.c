#include <stdio.h>
int main(void) {
  double weight[6], sum = 0;
  int i;
  for (i = 0; i < 6; i++) {
    scanf("%lf", &weight[i]);
    sum += weight[i];
  }
  printf("%.1lf", sum / 6);
  return 0;
}
