#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  string s;
  getline(cin, s);

  int cnt = 0;
  stringstream ss(s);
  while (ss >> s) cnt++;
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
