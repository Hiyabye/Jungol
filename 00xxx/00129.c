#include <stdio.h>
int main(void) {
  int a, b;
  char choice = ' ';
  while (1) {
    printf("Base = ");
    scanf("%d", &a);
    printf("Height = ");
    scanf("%d", &b);
    printf("Triangle width = %.1lf\nContinue? ", (double)a * b / 2);
    scanf(" %c", &choice);
    if (choice == 'Y' || choice == 'y') continue;
    else break;
  }
  return 0;
}
