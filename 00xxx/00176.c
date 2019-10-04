#include <math.h>
#include <stdio.h>
int count(double a, double b);

int main(void) {
  double a, b;
  scanf("%lf %lf", &a, &b);
  printf("%d", count(a, b));
  return 0;
}

int count(double a, double b) {
  int i = 0, count = 0;
  double temp;
  a = sqrt(a), b = sqrt(b);
  if (a >= b) {
    temp = b;
    b = a;
    a = temp;
  }
  while (1) {
    if (i >= a && i <= b)
      count++;
    else if (i > b)
      break;
    i++;
  }
  return count;
}
