#include <stdio.h>
void print(void);

int main(void) {
  printf("first\n");
  print();
  printf("second\n");
  print();
  printf("third\n");
  print();
}

void print(void) { printf("@@@@@@@@@@\n"); }
