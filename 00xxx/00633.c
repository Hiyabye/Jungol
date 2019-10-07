#include <stdio.h>
void menu(void);

int main(void) {
  int choice;
  while (1) {
    menu();
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("\nSeoul\n\n");
      break;
    case 2:
      printf("\nWashington\n\n");
      break;
    case 3:
      printf("\nTokyo\n\n");
      break;
    case 4:
      printf("\nBeijing\n\n");
      break;
    default:
      printf("\nnone\n\n");
      return 0;
    }
  }
}

void menu(void) {
  printf("1. Korea\n");
  printf("2. USA\n");
  printf("3. Japan\n");
  printf("4. China\n");
  printf("number? ");
}
