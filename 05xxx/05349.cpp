#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s;
  getline(cin, s);

  string t = "";
  vector<string> v;
  for (char c : s) {
    if (c != ' ') {
      t += c;
    } else if (!t.empty()) {
      v.push_back(t);
      t = "";
    }
  }
  if (!t.empty()) {
    v.push_back(t);
  }

  while (!v.empty()) {
    if (v.size() % 2 == 0) {
      cout << v.back() << " ";
    }
    v.pop_back();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
