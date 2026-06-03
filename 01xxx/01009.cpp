#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string n;
  cin >> n;
  while (n != "0") {
    while (n.back() == '0') { n.pop_back(); }
    for (int i = 0; i < n.size(); i++) { cout << n[n.length() - i - 1]; }
    cout << " ";
    int sum = 0;
    for (char c : n) { sum += c - '0'; }
    cout << sum << "\n";
    cin >> n;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
