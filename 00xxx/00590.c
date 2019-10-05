#include <stdio.h>
int n, arr[101];
void output(void);
void dice(int level);

int main(void) {
  scanf("%d", &n);
  arr[0] = 1;

  dice(1);
  return 0;
}

void output(void) {
  int i;
  for (i = 1; i <= n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void dice(int level) {
  int i;

  if (level > n) {
    output();
    return;
  }

  for (i = arr[level - 1]; i <= 6; i++) {
    arr[level] = i;
    dice(level + 1);
  }
}
