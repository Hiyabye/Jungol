#include <stdio.h>
int main(void) {
  int n;
  char arr[10];
  for (n = 0; n < 10; n++) scanf(" %c", &arr[n]);
  for (n = 9; n >= 0; n--) printf("%c ", arr[n]);
  return 0;
}
