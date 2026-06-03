#include <stdio.h>
#include <string.h>
struct person {
  char name[100];
  char phone[100];
  char address[100];
};

int main(void) {
  struct person p[3];
  int i, key = 0;
  char first[100];
  for (i = 0; i < 3; i++) {
    scanf("%s", p[i].name);
    scanf("%s", p[i].phone);
    scanf("%s", p[i].address);
    if (i == 0) strcpy(first, p[i].name);
    else {
      if (strcmp(p[i].name, first) < 0) {
        strcpy(first, p[i].name);
        key = i;
      }
    }
  }
  printf("name : %s\ntel : %s\naddr : %s", first, p[key].phone, p[key].address);
  return 0;
}
