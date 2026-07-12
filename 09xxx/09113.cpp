#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s = "우리나라 대한민국!";

  cout << s << "\n위 문자열의 길이는 " << s.length() << "입니다.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
