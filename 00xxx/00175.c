#include <stdio.h>
int arr[15];
void sort(int n);

int main(void) {
  int i, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  sort(n);
  return 0;
}

void sort(int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - 1 - i; j++) {
      if (arr[j] < arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
}
