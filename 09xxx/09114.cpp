#include <cctype>
#include <iostream>
using namespace std;

void solve(void) {
  char c;
  cin >> c;
  while (isalnum(c)) {
    if ('a' <= c && c <= 'z') cout << "소문자입니다.\n";
    else if ('A' <= c && c <= 'Z') cout << "대문자입니다.\n";
    else cout << "숫자문자입니다.\n";
    cin >> c;
  }
  cout << "영문, 숫자 이외의 문자입니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
