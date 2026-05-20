#include <iostream>
#include <vector>
#define MOD 10000
using namespace std;
using Matrix = vector<vector<int>>;

inline Matrix matmul(const Matrix &a, const Matrix &b) {
  int n = a.size();
  Matrix c(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      for (int k = 0; k < n; k++)
        c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
  return c;
}

inline Matrix matpow(Matrix base, int exp) {
  int n = base.size();
  Matrix ret(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++)
    ret[i][i] = 1;

  while (exp) {
    if (exp & 1)
      ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

bool solve(void) {
  int n;
  cin >> n;
  if (n == -1)
    return false;

  cout << matpow({{0, 1}, {1, 1}}, n)[0][1] << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve())
    ;
  return 0;
}
