#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

bool solve(void) {
  string s;
  getline(cin, s);
  if (s == "END") return false;

  map<string, int> mp;
  stringstream ss(s);
  while (ss >> s) mp[s]++;

  for (const auto &[k, v] : mp) cout << k << " : " << v << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
