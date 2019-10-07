#include <stdio.h>
#include <string.h>
int main(void) {
  char word[5][30];
  int i;
  for (i = 0; i < 5; i++)
    scanf("%s", &word[i]);
  for (i = 4; i >= 0; i--)
    printf("%s\n", word[i]);
  return 0;
}
