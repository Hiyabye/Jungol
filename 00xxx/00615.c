#include <stdio.h>
struct score {
  char name[20];
  int korean;
  int english;
};

int main() {
  struct score id_1;
  struct score id_2;
  scanf("%s", &id_1.name);
  scanf("%d %d", &id_1.korean, &id_1.english);
  scanf("%s", &id_2.name);
  scanf("%d %d", &id_2.korean, &id_2.english);
  printf("%s %d %d\n", id_1.name, id_1.korean, id_1.english);
  printf("%s %d %d\n", id_2.name, id_2.korean, id_2.english);
  printf("avg %d %d", (id_1.korean + id_2.korean) / 2,
         (id_1.english + id_2.english) / 2);
  return 0;
}
