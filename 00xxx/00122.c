#include <stdio.h>
int main(void) {
  int a;
  scanf("%d", &a);
  if (a % 4 == 0) {
    if (a % 100 == 0) {
      if (a % 400 == 0) printf("leap year");
      else printf("common year");
    } else printf("leap year");
  } else printf("common year");
  return 0;
}
