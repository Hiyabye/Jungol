#include <stdio.h>
void square(int a);

int main() {
  int a;
  scanf("%d", &a);
  square(a);
  return 0;
}

void square(int a) {
  printf("1 ");
  for (int num = 2; num <= a * a; num++) {
    printf("%d ", num);
    if (num % a == 0) {
      printf("\n");
    }
  }
}
