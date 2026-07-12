#include <iostream>
using namespace std;

void solve(void) {
  cout << "&\n";     // (1)
  cout << "~&\n";    // (2)
  cout << "<<\n";    // (3)
  cout << ">>&<<\n"; // (4)
  cout << "^^^\n";   // (5)
  cout << ">>&\n";   // (6)
  cout << "&~<<\n";  // (7)
  cout << "^<<\n";   // (8)
  cout << "&\n";     // (9)
  cout << "^&\n";    // (10)
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
