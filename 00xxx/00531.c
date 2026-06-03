#include <stdio.h>
int main() {
  double weight;
  scanf("%lf", &weight);
  if (weight <= 50.80) { printf("Flyweight"); }
  if (50.80 < weight && weight <= 61.23) { printf("Lightweight"); }
  if (61.23 < weight && weight <= 72.57) { printf("Middleweight"); }
  if (72.57 < weight && weight <= 88.45) { printf("Cruiserweight"); }
  if (weight > 88.45) { printf("Heavyweight"); }
  return 0;
}
