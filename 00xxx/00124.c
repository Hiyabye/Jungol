#include <stdio.h>
int main(void) {
  int a, day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  scanf("%d", &a);
  printf("%d", day[a - 1]);
  return 0;
}
