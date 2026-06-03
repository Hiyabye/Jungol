#include <stdio.h>
int main() {
  int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, three = 0, five = 0;
  scanf("%d %d %d %d %d %d %d %d %d %d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8,
        &i9, &i10);
  if (i1 % 3 == 0) { three++; }
  if (i1 % 5 == 0) { five++; }
  if (i2 % 3 == 0) { three++; }
  if (i2 % 5 == 0) { five++; }
  if (i3 % 3 == 0) { three++; }
  if (i3 % 5 == 0) { five++; }
  if (i4 % 3 == 0) { three++; }
  if (i4 % 5 == 0) { five++; }
  if (i5 % 3 == 0) { three++; }
  if (i5 % 5 == 0) { five++; }
  if (i6 % 3 == 0) { three++; }
  if (i6 % 5 == 0) { five++; }
  if (i7 % 3 == 0) { three++; }
  if (i7 % 5 == 0) { five++; }
  if (i8 % 3 == 0) { three++; }
  if (i8 % 5 == 0) { five++; }
  if (i9 % 3 == 0) { three++; }
  if (i9 % 5 == 0) { five++; }
  if (i10 % 3 == 0) { three++; }
  if (i10 % 5 == 0) { five++; }
  printf("Multiples of 3 : %d\nMultiples of 5 : %d", three, five);
  return 0;
}
