#include <stdio.h>
struct triangle {
  int x;
  int y;
};

int main(void) {
  struct triangle a1, a2, a3;
  scanf("%d %d %d %d %d %d", &a1.x, &a1.y, &a2.x, &a2.y, &a3.x, &a3.y);
  printf("(%.1lf, %.1lf)", (double)(a1.x + a2.x + a3.x) / 3,
         (double)(a1.y + a2.y + a3.y) / 3);
  return 0;
}
