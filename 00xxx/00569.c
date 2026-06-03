#include <stdio.h>
int main(void) {
  int i, j, score[5][4], sum = 0, count = 0;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &score[i][j]);
      sum += score[i][j];
    }
    if (sum / 4 >= 80) {
      printf("pass\n");
      count++;
    } else printf("fail\n");
    sum = 0;
  }
  printf("Successful : %d\n", count);
  return 0;
}
