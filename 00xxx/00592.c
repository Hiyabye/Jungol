#include <stdio.h>
int calculate(int num);
int num, digit[9] = {0};

int main(void) {
  int i, num;

  scanf("%d", &num);
  printf("%d", calculate(num));
  return 0;
}

int calculate(int num) {
  int i, result = 0;

  for (i = 0; i < 9; i++) {
    result += (num % 10) * (num % 10);
    if (num < 10)
      break;
    num /= 10;
  }
  return result;
}
