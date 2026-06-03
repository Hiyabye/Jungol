#include <stdio.h>
int main(void) {
  char gender;
  int year;
  scanf(" %c %d", &gender, &year);
  if (year < 2000) {
    if (gender == 'M' || gender == 'm') printf("******-1******");
    else if (gender == 'F' || gender == 'f') printf("******-2******");
  } else if (year >= 2000) {
    if (gender == 'M' || gender == 'm') printf("******-3******");
    else if (gender == 'F' || gender == 'f') printf("******-4******");
  }
  return 0;
}
