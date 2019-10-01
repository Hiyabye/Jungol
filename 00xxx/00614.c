#include <stdio.h>

struct school {
  char name[20];
  int grade;
};

int main(void) {
  struct school student;
  scanf("%s", &student.name);
  scanf("%d", &student.grade);
  printf("6 grade in Jejuelementary School\n");
  printf("%d grade in %s School", student.grade, student.name);
  return 0;
}
