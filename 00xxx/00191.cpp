#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s;

  vector<string> v;
  do {
    cin >> s;
    v.push_back(s);
  } while (s != "0");

  cout << v.size() - 1 << "\n";
  for (int i = 0; i < v.size() - 1; i += 2) cout << v[i] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
