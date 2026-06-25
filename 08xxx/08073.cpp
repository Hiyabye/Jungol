#include <iostream>
#include <stack>
using namespace std;

void solve(void) {
  int n;
  cin >> n;

  stack<int> st;
  while (n--) {
    char op;
    cin >> op;
    if (op == 'i') {
      int a;
      cin >> a;
      st.push(a);
    } else if (op == 'o') {
      if (st.empty()) {
        cout << "empty\n";
      } else {
        cout << st.top() << "\n";
        st.pop();
      }
    } else if (op == 'c') {
      cout << st.size() << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
