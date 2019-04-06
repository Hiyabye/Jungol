#include <stdio.h>
int main() {
  char gender;
  int age;
  scanf("%c %d", &gender, &age);
  if (age >= 18) {
    if (gender == 'M') {
      printf("MAN");
    } else {
      printf("WOMAN");
    }
  } else {
    if (gender == 'M') {
      printf("BOY");
    } else {
      printf("GIRL");
    }
  }
  return 0;
}
