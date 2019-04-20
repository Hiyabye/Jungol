#include <stdio.h>
int main() {
  int i;
  printf("number? ");
  scanf("%d", &i);
  while (i != 0) {
    if (i > 0) {
      printf("positive integer\n");
      printf("number? ");
      scanf("%d", &i);
    } else {
      printf("negative number\n");
      printf("number? ");
      scanf("%d", &i);
    }
  }
  return 0;
}
