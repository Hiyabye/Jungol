#include <stdio.h>
int main(void) {
  int w, h;
  scanf("%d %d", &w, &h);
  w += 5, h *= 2;
  printf("width = %d\nlength = %d\narea = %d", w, h, w * h);
  return 0;
}
