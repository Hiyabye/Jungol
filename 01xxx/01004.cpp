#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

inline int sum(int n, const vector<int> &v) {
  int ret = 0;
  for (int i = 0; i < n; i++) ret += v[i];
  return ret;
}

inline double avg(int n, const vector<int> &v) { return (double)sum(n, v) / n; }

inline double var(int n, const vector<int> &v) {
  double a = avg(n, v), ret = 0;
  for (int i = 0; i < n; i++) ret += (v[i] - a) * (v[i] - a);
  return ret / n;
}

inline double stddev(int n, const vector<int> &v) { return sqrt(var(n, v)); }

inline double calc(double x) { return floor(x * 10.0 + 0.5) / 10.0; }

inline void print(double x) {
  double y = calc(x);
  if (y == (int)y) cout << (int)y;
  else cout << fixed << setprecision(1) << y;
  cout << "\n";
}

void solve(void) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  cout << sum(n, v) << "\n";
  print(avg(n, v));
  print(stddev(n, v));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
