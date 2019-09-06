#include <stdio.h>
int main(void) {
  int n;
  char a[9];
  for (n = 0; n < 10; n++) {
    scanf(" %1c", &a[n]);
  }
  printf("%c ", a[0]);
  printf("%c ", a[3]);
  printf("%c", a[6]);
  return 0;
}
