#include <stdio.h>
int main(void) {
  int n, i, j, a[100][3], sum[100] = {0}, tmp;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &a[i][j]);
      sum[i] += a[i][j];
    }
  }
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (sum[i] < sum[j]) {
        tmp = sum[i];
        sum[i] = sum[j];
        sum[j] = tmp;
      }
    }
  }
  for (i = 0; i < n; i++)
    printf("%.1lf\n", sum[i] / 3.0);
  return 0;
}
