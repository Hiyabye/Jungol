#include <stdio.h>
int year_check(int n);
int main(void) {
  int start, end, count = 0;
  scanf("%d %d", &start, &end);
  for (; start <= end; start++) {
    if (year_check(start) == 1) count++;
  }
  printf("%d", count);
  return 0;
}

int year_check(int n) {
  if (n % 4 == 0) {
    if (n % 100 == 0) {
      if (n % 400 == 0) return 1;
      else return 0;
    } else return 1;
  } else return 0;
}
