#include <stdio.h>
void letters() { printf("~!@#$^&*()_+|\n"); }

int main() {
  int i;
  scanf("%d", &i);
  for (i = i; i > 0; i--) {
    letters();
  }
  return 0;
}
