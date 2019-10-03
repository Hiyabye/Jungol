#include <stdio.h>
int a[10] = {0};
void bubble_sort(int n);

int main(void) {
  int i, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  bubble_sort(n);
  for (i = n; i > 0; i--) {
    printf("%d ", a[i - 1]);
  }
  return 0;
}

void bubble_sort(int n) {
  int i, j, temp;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - 1; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}
