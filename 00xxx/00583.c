#include <math.h>
#include <stdio.h>
void compare(double a, double b, double c);
void calculate(double a, double b, double c);
int main(void) {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  compare(a, b, c);
  return 0;
}

void compare(double a, double b, double c) {
  if (a >= b) {
    if (b >= c)
      calculate(a, b, c);
    else {
      if (a >= c)
        calculate(a, c, b);
      else
        calculate(c, a, b);
    }
  } else {
    if (a >= c)
      calculate(b, a, c);
    else {
      if (b >= c)
        calculate(b, c, a);
      else
        calculate(c, b, a);
    }
  }
}

void calculate(double a, double b, double c) {
  printf("%.0lf %.0lf %.0lf", ceil(a), floor(c), floor(b + 0.5));
  return;
}
