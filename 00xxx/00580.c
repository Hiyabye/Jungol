#include <stdio.h>
int main(void) {
  int month, check, day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  scanf("%d %d", &month, &check);
  if (check <= day[month - 1] && check > 0)
    printf("OK!");
  else
    printf("BAD!");
  return 0;
}
