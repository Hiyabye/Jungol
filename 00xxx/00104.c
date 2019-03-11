#include <stdio.h>
int main() {
  printf("%s %d\n", "kor", 90);
  printf("%s %d\n", "mat", 80);
  printf("%s %d\n", "eng", 100);
  printf("%s %d\n", "sum", 90 + 80 + 100);
  printf("%s %d", "avg", (90 + 80 + 100) / 3);
  return 0;
}
