#include <stdio.h>
int main(void) {
  int n;
  char a[9];
  for (n = 0; n < 10; n++) {
    scanf(" %1c", &a[n]);
  }
  for (n = 0; n < 10; n++) {
    printf("%c", a[n]);
  }
  return 0;
}
