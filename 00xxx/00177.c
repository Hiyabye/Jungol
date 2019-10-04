#include <stdio.h>
int calculate(int num[]);
int main(void) {
  int i, num[5];
  for (i = 0; i < 5; i++)
    scanf("%d", &num[i]);
  printf("%d", calculate(num));
  return 0;
}

int calculate(int num[]) {
  int i, sum = 0;
  for (i = 0; i < 5; i++) {
    if (num[i] < 0)
      num[i] *= -1;
    sum += num[i];
  }
  return sum;
}
