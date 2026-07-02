#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> f(41, 0);
  f[1] = f[2] = 1;
  for (int i = 3; i <= 40; i++) f[i] = f[i - 1] + f[i - 2];

  cout << "피보나치 수열 10항 : " << f[10] << "\n";
  cout << "피보나치 수열 20항 : " << f[20] << "\n";
  cout << "피보나치 수열 30항 : " << f[30] << "\n";
  cout << "피보나치 수열 40항 : " << f[40];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
