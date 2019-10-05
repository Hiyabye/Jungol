#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[100], str2[100];
  gets(str1);
  gets(str2);
  if (strlen(str1) <= strlen(str2))
    printf("%s\n%s", str1, str2);
  else
    printf("%s\n%s", str2, str1);
  return 0;
}
