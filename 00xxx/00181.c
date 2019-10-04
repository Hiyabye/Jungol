#include <stdio.h>
#define PI 3.141592
double area(double r);

int main(void) {
  double r;
  printf("radius : ");
  scanf("%lf", &r);
  printf("area = %.3lf", area(r));
  return 0;
}

double area(double r) { return r * r * PI; }
