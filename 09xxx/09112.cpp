#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  cout << "입력받은 문자열의 길이는 " << s.length() << "입니다.\n";
  for (int i = s.length() - 1; i >= 0; i--) cout << s[i];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
