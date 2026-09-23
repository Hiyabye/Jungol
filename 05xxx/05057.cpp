#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s1;
  cin >> s1;
  string s2;
  cin >> s2;

  string s3 = s1 + s2;
  reverse(s3.begin(), s3.end());

  cout << s3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
