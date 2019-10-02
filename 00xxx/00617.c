#include <stdio.h>
struct person {
  char name[20];
  int height;
};

int main(void) {
  struct person p[5];
  int i, min = 200, min_key = -1;
  for (i = 0; i < 5; i++) {
    scanf("%s", p[i].name);
    scanf("%d", &p[i].height);
    if (p[i].height < min) {
      min = p[i].height;
      min_key = i;
    }
  }
  printf("%s %d", p[min_key].name, min);
  return 0;
}
