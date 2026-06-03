#include <stdio.h>
int main(void) {
  int i, alpha[26];
  char input;
  scanf(" %c", &input);
  for (i = 65; i < 91; i++) alpha[i] = 0;
  while (input >= 65 && input <= 90) {
    alpha[input]++;
    scanf(" %c", &input);
  }
  for (i = 65; i < 91; i++) {
    if (alpha[i] > 0) printf("%c : %d\n", i, alpha[i]);
  }
  return 0;
}
