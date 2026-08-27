#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  cout << "당신의 이름은 무엇입니까? ";
  string s;
  cin >> s;
  cout << "당신의 나이는 몇 살입니까? ";
  int n;
  cin >> n;

  cout << "당신의 이름은 " << s << "이고 나이는 " << n << "세이군요.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
