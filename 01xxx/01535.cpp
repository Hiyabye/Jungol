#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  string s;
  getline(cin, s);

  unordered_set<string> us;
  vector<string> ans;
  while (s != "END") {
    stringstream ss(s);
    while (ss >> s) {
      if (us.find(s) != us.end()) continue;
      us.insert(s);
      ans.push_back(s);
    }
    for (const auto &t : ans) cout << t << " ";
    cout << "\n";
    getline(cin, s);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
