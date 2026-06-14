#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;
using Matrix = vector<vector<long long>>;

inline Matrix matmul(const Matrix &a, const Matrix &b) {
  Matrix c(2, vector<long long>(2, 0));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % MOD;
      }
    }
  }
  return c;
}

inline Matrix matpow(Matrix base, long long exp) {
  Matrix ret(2, vector<long long>(2, 0));
  for (int i = 0; i < 2; i++) ret[i][i] = 1;
  while (exp) {
    if (exp & 1) ret = matmul(ret, base);
    base = matmul(base, base);
    exp >>= 1;
  }
  return ret;
}

bool solve(void) {
  long long n;
  cin >> n;
  if (n == -1) return false;

  cout << matpow({{1, 1}, {1, 0}}, n)[0][1] << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
