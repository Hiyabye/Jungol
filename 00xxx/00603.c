#include <stdio.h>
#include <string.h>
int main(void) {
  char line[100];
  char *token;
  int i = 1;
  gets(line);
  token = strtok(line, " ");
  while (token != NULL) {
    if (i % 2 != 0) printf("%s\n", token);
    token = strtok(NULL, " ");
    i++;
  }
  return 0;
}
