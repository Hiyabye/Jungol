#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline void check(const vector<string> &v, string s) {
  bool flag = false;
  for (const string &t : v) {
    if (t.find(s) != string::npos) {
      flag = true;
      cout << t << "\n";
    }
  }
  if (!flag) cout << "찾는 단어가 없습니다.\n";
}

void solve(void) {
  vector<string> v = {"champion", "tel",         "pencil", "jungol", "olympiad",
                      "class",    "information", "lesson", "book",   "lion"};

  cout << "문자를 입력하세요. " << flush;
  string s;
  cin >> s;
  check(v, s);

  cout << "\n문자열을 입력하세요. " << flush;
  cin >> s;
  check(v, s);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
