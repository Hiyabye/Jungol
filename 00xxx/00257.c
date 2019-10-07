#include <stdio.h>
int main(void) {
  int n;
  while (1) {
    scanf("%d", &n);
    if (n < 0 || n > 100)
      continue;
    else {
      if (n >= 70) {
        printf("PASS");
        break;
      } else {
        printf("FAIL");
        break;
      }
    }
  }
  return 0;
}
