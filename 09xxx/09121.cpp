#include <iostream>
using namespace std;

void solve(void) {
  cout << "문자를 입력하세요. ";
  char c;
  cin >> c;

  if (c == 'b') cout << "book";
  else if (c == 'c') cout << "champion\nclass";
  else if (c == 'i') cout << "information";
  else if (c == 'j') cout << "jungol";
  else if (c == 'l') cout << "lesson\nlion";
  else if (c == 'o') cout << "olympiad";
  else if (c == 'p') cout << "pencil";
  else if (c == 't') cout << "tel";
  else cout << "찾는 단어가 없습니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
