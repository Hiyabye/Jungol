#include <stdio.h>
struct student {
  char name[20];
  char school[20];
  int grade;
};

int main(void) {
  struct student id_1;
  scanf("%s", &id_1.name);
  scanf("%s", &id_1.school);
  scanf("%d", &id_1.grade);
  printf("Name : %s\n", id_1.name);
  printf("School : %s\n", id_1.school);
  printf("Grade : %d", id_1.grade);
  return 0;
}
