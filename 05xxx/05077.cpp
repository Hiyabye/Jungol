#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s;
  cin >> s;

  return s.find('a') != string::npos || s.find('A') != string::npos;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "True" : "False");
  return 0;
}
