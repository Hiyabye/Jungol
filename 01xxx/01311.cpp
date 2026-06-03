#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline void one(const vector<string> &v) {
  for (int i = 1; i < 5; i++) {
    if (v[i][0] != v[i - 1][0] || v[i][1] != v[i - 1][1] + 1) { return; }
  }
  cout << 900 + v[4][1] - '0';
  exit(0);
}

inline void two(const vector<string> &v) {
  vector<int> cnt(10, 0);
  for (int i = 0; i < 5; i++) { cnt[v[i][1] - '0']++; }
  for (int i = 0; i < 10; i++) {
    if (cnt[i] == 4) {
      cout << 800 + i;
      exit(0);
    }
  }
}

inline void three(const vector<string> &v) {
  vector<int> cnt(10, 0);
  for (int i = 0; i < 5; i++) { cnt[v[i][1] - '0']++; }
  for (int i = 0; i < 10; i++) {
    if (cnt[i] != 3) continue;
    for (int j = 0; j < 10; j++) {
      if (j == i || cnt[j] != 2) continue;
      cout << 700 + 10 * i + j;
      exit(0);
    }
  }
}

inline void four(const vector<string> &v) {
  vector<int> cnt(4, 0);
  for (int i = 0; i < 5; i++) {
    if (v[i][0] == 'R') cnt[0]++;
    else if (v[i][0] == 'B') cnt[1]++;
    else if (v[i][0] == 'Y') cnt[2]++;
    else if (v[i][0] == 'G') cnt[3]++;
  }
  for (int i = 0; i < 4; i++) {
    if (cnt[i] == 5) {
      cout << 600 + v[4][1] - '0';
      exit(0);
    }
  }
}

inline void five(const vector<string> &v) {
  vector<string> w(5);
  for (int i = 0; i < 5; i++) {
    w[i] = string(2, '.');
    w[i][0] = v[i][1];
    w[i][1] = v[i][0];
  }
  sort(w.begin(), w.end());
  for (int i = 1; i < 5; i++) {
    if (w[i][0] != w[i - 1][0] + 1) return;
  }
  cout << 500 + w[4][0] - '0';
  exit(0);
}

inline void six(const vector<string> &v) {
  vector<int> cnt(10, 0);
  for (int i = 0; i < 5; i++) { cnt[v[i][1] - '0']++; }
  for (int i = 0; i < 10; i++) {
    if (cnt[i] == 3) {
      cout << 400 + i;
      exit(0);
    }
  }
}

inline void seven(const vector<string> &v) {
  vector<int> cnt(10, 0);
  for (int i = 0; i < 5; i++) { cnt[v[i][1] - '0']++; }
  for (int i = 0; i < 10; i++) {
    if (cnt[i] != 2) continue;
    for (int j = 0; j < 10; j++) {
      if (j == i || cnt[j] != 2) continue;
      cout << 300 + 10 * max(i, j) + min(i, j);
      exit(0);
    }
  }
}

inline void eight(const vector<string> &v) {
  vector<int> cnt(10, 0);
  for (int i = 0; i < 5; i++) { cnt[v[i][1] - '0']++; }
  for (int i = 0; i < 10; i++) {
    if (cnt[i] == 2) {
      cout << 200 + i;
      exit(0);
    }
  }
}

inline void nine(const vector<string> &v) {
  int mx = 0;
  for (int i = 0; i < 5; i++) { mx = max(mx, v[i][1] - '0'); }
  cout << 100 + mx;
}

void solve(void) {
  vector<string> v(5);
  for (int i = 0; i < 5; i++) {
    string a, b;
    cin >> a >> b;
    v[i] = a + b;
  }
  sort(v.begin(), v.end());

  one(v);
  two(v);
  three(v);
  four(v);
  five(v);
  six(v);
  seven(v);
  eight(v);
  nine(v);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
