#include <stdio.h>
int get_gcd(int a, int b);

int main(void) {
  int i, n, arr[10], gcd, lcm;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  gcd = lcm = arr[0];
  for (i = 1; i < n; i++) {
    gcd = get_gcd(gcd, arr[i]);
    lcm = lcm / get_gcd(lcm, arr[i]) * arr[i];
  }
  printf("%d %d", gcd, lcm);
  return 0;
}

int get_gcd(int a, int b) {
  int i, gcd;
  for (i = 1; i <= a && i <= b; ++i) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }
  return gcd;
}
