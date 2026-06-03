#include <math.h>
#include <stdio.h>
int later(double num[]);
int first(double num[]);

int main(void) {
  int i;
  double num[3];
  for (i = 0; i < 3; i++) scanf("%lf", &num[i]);
  printf("%d\n", later(num));
  printf("%d", first(num));
  return 0;
}

int later(double num[]) {
  int i;
  double sum = 0;
  for (i = 0; i < 3; i++) sum += num[i];
  return floor(sum / 3 + 0.5);
}

int first(double num[]) {
  int i;
  double sum = 0;
  for (i = 0; i < 3; i++) sum += floor(num[i] + 0.5);
  return floor(sum / 3 + 0.5);
}
