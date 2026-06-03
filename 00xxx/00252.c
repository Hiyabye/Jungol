#include <stdio.h>
int main(void) {
  char a;
  scanf(" %c", &a);
  if (a == 'A' || a == 'a') printf("Excellent");
  else if (a == 'B' || a == 'b') printf("Good");
  else if (a == 'C' || a == 'c') printf("Usually");
  else if (a == 'D' || a == 'd') printf("Effort");
  else if (a == 'F' || a == 'f') printf("Failure");
  else printf("error");
  return 0;
}
