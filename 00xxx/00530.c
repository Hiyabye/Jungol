#include <stdio.h>
int main() {
  int age, notadult;
  scanf("%d", &age);
  if (age >= 20) { printf("adult"); }
  if (age < 20) {
    notadult = 20 - age;
    printf("%d years later", notadult);
  }
  return 0;
}
