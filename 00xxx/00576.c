#include <stdio.h>
int calculate(int a, int b, char how);

int main(void) {
  int a, b, result;
  char how;
  scanf("%d %c %d", &a, &how, &b);
  result = calculate(a, b, how);
  printf("%d %c %d = %d", a, how, b, result);
  return 0;
}

int calculate(int a, int b, char how) {
  if (how == '+')
    return a + b;
  else if (how == '-')
    return a - b;
  else if (how == '*')
    return a * b;
  else if (how == '/')
    return a / b;
  else
    return 0;
}
