#include <stdio.h>
int bignum(int a, int b, int c);

int main(void) {
  int a, b, c, result;
  scanf("%d %d %d", &a, &b, &c);
  result = bignum(a, b, c);
  printf("%d", result);
  return 0;
}

int bignum(int a, int b, int c) {
  if (a > b) {
    if (a > c) {
      return a;
    } else {
      return c;
    }
  } else {
    if (b > c) {
      return b;
    } else {
      return c;
    }
  }
}
