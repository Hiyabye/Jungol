#include <stdio.h>
typedef struct {
  char name[20];
  int score;
  int rank;
} student;

int main(void) {
  student p[10];
  int i, j;
  for (i = 0; i < 10; i++) {
    fscanf(stdin, "%s %d", &p[i].name, &p[i].score);
    p[i].rank = 1;
  }
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (p[i].score < p[j].score) p[i].rank++;
    }
  }
  fprintf(stdout, "Name Score Rank\n");
  for (i = 0; i < 10; i++)
    fprintf(stdout, "%4s %5d %4d\n", p[i].name, p[i].score, p[i].rank);
  return 0;
}
