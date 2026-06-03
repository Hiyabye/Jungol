#include <stdio.h>
int main(void) {
  int i, success = 0;
  char check, jungol[6] = {'J', 'U', 'N', 'G', 'O', 'L'};
  scanf(" %c", &check);
  for (i = 0; i < 6; i++) {
    if (check == jungol[i]) {
      printf("%d", i);
      success = 1;
      break;
    }
  }
  if (success == 0) printf("none");
  return 0;
}
