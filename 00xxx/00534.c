#include <stdio.h>
int main() {
  char letter;
  scanf("%c", &letter);
  if (letter == 'A') {
    printf("Excellent");
  } else if (letter == 'B') {
    printf("Good");
  } else if (letter == 'C') {
    printf("Usually");
  } else if (letter == 'D') {
    printf("Effort");
  } else if (letter == 'F') {
    printf("Failure");
  } else {
    printf("error");
  }
  return 0;
}
