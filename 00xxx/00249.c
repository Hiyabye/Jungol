#include <stdio.h>
int main(void) {
  int count, price;
  scanf("%d %d", &count, &price);
  if (count >= 3 && count < 5) printf("%.0lf", (double)price * 0.95);
  else if (count >= 5 && count < 7) printf("%.0lf", (double)price * 0.90);
  else if (count >= 7) printf("%.0lf", (double)price * 0.85);
  else printf("%d", price);
  return 0;
}
