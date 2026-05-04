#include <iostream>
using namespace std;

void solve(void) {
  cout << "당신의 나이는 몇 살입니까? ";
  int age;
  cin >> age;

  cout << "당신의 나이는 " << age << "살이군요.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
