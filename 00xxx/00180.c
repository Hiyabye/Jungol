#include <stdio.h>
void macro(int num[]);

int main(void) {
  int i, num[7];
  for (i = 0; i < 7; i++) scanf("%d", &num[i]);
  macro(num);
  return 0;
}

void macro(int num[]) {
  int i, j, temp;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 6; j++) {
      if (num[j] > num[j + 1]) {
        temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;
      }
    }
  }
  for (i = 0; i < 7; i++) printf("%d ", num[i]);
}
