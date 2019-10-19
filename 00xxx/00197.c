#include <stdio.h>
struct square {
  int left;
  int down;
  int right;
  int up;
};

int main(void) {
  struct square s[3];
  int i;
  for (i = 0; i < 2; i++) {
    scanf("%d", &s[i].left);
    scanf("%d", &s[i].down);
    scanf("%d", &s[i].right);
    scanf("%d", &s[i].up);
  }
  if (s[0].left <= s[1].left)
    s[2].left = s[0].left;
  else
    s[2].left = s[1].left;
  if (s[0].down <= s[1].down)
    s[2].down = s[0].down;
  else
    s[2].down = s[1].down;
  if (s[0].right >= s[1].right)
    s[2].right = s[0].right;
  else
    s[2].right = s[1].right;
  if (s[0].up >= s[1].up)
    s[2].up = s[0].up;
  else
    s[2].up = s[1].up;
  printf("%d %d %d %d", s[2].left, s[2].down, s[2].right, s[2].up);
  return 0;
}
