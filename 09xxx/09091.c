#include <stdio.h>

void input(int *a, int *b) {
  printf("두 수를 입력하세요. ");
  scanf("%d %d", a, b);
}

int plus(int a, int b) { return a + b; }

int multi(int a, int b) { return a * b; }

void output(int hap, int gop) { printf("합 : %d\n곱 : %d", hap, gop); }

int main(void) {
  int a, b;
  int hap, gop;

  input(&a, &b);
  hap = plus(a, b);
  gop = multi(a, b);
  output(hap, gop);

  return 0;
}
