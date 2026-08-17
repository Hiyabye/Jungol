#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s;
  vector<string> v;
  while (cin >> s) v.push_back(s);

  for (int i = 0; i < v.size() - 1; i++) {
    if (v[i].ends_with(s.back())) cout << v[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
