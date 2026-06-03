#include <stdio.h>
int main(void) {
  int a;
  scanf("%d", &a);
  if (a % 4 == 0) {
    if (a % 100 == 0) {
      if (a % 400 == 0) printf("29");
      else printf("28");
    } else printf("29");
  } else printf("28");
  return 0;
}
