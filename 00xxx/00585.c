#include <stdio.h>
int a[10];
void bubble_sort(void);

int main(void) {
  int i;
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  bubble_sort();
  return 0;
}

void bubble_sort(void) {
  int i, j, temp;
  for (i = 1; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (a[j] < a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    for (j = 0; j < 10; j++)
      printf("%d ", a[j]);
    printf("\n");
  }
}
