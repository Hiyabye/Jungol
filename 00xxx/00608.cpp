#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  cout << (s.find("c") != string::npos ? "Yes" : "No") << " ";
  cout << (s.find("ab") != string::npos ? "Yes" : "No");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
