#include <stdio.h>
int main() {
  int h, w, bemahn;
  scanf("%d %d", &h, &w);
  bemahn = w + 100 - h;
  printf("%d", bemahn);
  if (bemahn > 0) { printf("\nObesity"); }
  return 0;
}
