#include <iostream>
#include <sstream>
#include <stack>
#include <string>
using namespace std;

void solve(void) {
  string s;
  getline(cin, s);

  stringstream ss(s);
  stack<string> st;
  while (ss >> s) st.push(s);

  while (!st.empty()) {
    cout << st.top() << "\n";
    st.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
