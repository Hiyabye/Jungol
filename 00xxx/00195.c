#include <stdio.h>
struct person {
  char name[100];
  char phone[100];
  char address[100];
};

int main(void) {
  struct person p;
  scanf("%s", p.name);
  scanf("%s", p.phone);
  scanf("%s", p.address);
  printf("name : %s\ntel : %s\naddr : %s", p.name, p.phone, p.address);
  return 0;
}
