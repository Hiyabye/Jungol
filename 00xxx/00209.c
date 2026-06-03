#include <stdio.h>
int main(void) {
  int a, i = 0, count = 0, n[1000] = {'\0'};
  while (1) {
    scanf("%d", &n[i]);
    if (n[i] == 0) break;
    i++;
  }
  for (a = 0; a < i; a++) {
    if (n[a] % 3 == 0) {
      if (n[a] % 5 == 0) {
        printf("%d ", n[a]);
        count++;
      }
    }
  }
  if (count > 0) printf("\n");
  printf("%d", count);
  return 0;
}
