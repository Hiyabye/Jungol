#include <stdio.h>
int main(void) {
  int i, j, score[100], count[11] = {0};
  for (i = 0; i < 100; i++) {
    scanf("%d", &score[i]);
    if (score[i] == 0) break;
    count[score[i] / 10]++;
  }
  for (i = 10; i >= 0; i--) {
    if (count[i] > 0) printf("%d : %d person\n", i * 10, count[i]);
  }
  return 0;
}
