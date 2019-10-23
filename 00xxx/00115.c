#include <stdio.h>
struct person {
  int height;
  int weight;
};

int main(void) {
  struct person p[2];
  int i;
  for (i = 0; i < 2; i++) {
    scanf("%d", &p[i].height);
    scanf("%d", &p[i].weight);
  }
  if (p[0].height > p[1].height && p[0].weight > p[1].weight)
    printf("1");
  else
    printf("0");
  return 0;
}
