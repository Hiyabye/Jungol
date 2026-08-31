#include <iostream>
#include <string>
using namespace std;

struct Person {
  string s;
  int n;
};

void solve(void) {
  cout << "친한 친구의 이름과 나이를 입력하세요. ";
  Person p;
  cin >> p.s >> p.n;

  cout << "당신의 이름 : 손예준, 나이 : 12\n";
  cout << "친구의 이름 : " << p.s << ", 나이 : " << p.n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
