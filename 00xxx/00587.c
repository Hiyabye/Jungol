#include <stdio.h>
void print_macro(int n);

int main(void) {
  int n;
  scanf("%d", &n);
  print_macro(n);
  return 0;
}

void print_macro(int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("recursive\n");
}
