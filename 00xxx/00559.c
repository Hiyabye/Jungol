#include <stdio.h>
int main(void) {
  int a, b;
  double score[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
  scanf("%d %d", &a, &b);
  printf("%.1lf", score[a - 1] + score[b - 1]);
  return 0;
}
