#include <stdio.h>
#include <string.h>
struct string {
  char str[100];
};

int main() {
  int i, n;
  struct string p[100];
  scanf("%d", &n);
  for (i = 0; i <= n; i++) { gets(p[i].str); }
  for (i = n; i >= 0; i--) { printf("%s\n", p[i].str); }
  return 0;
}
