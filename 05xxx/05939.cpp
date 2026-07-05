#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

inline int calc(int x) {
  if (x < 3) return x + 1;
  if (x < 6) return x + 2;
  return x + 3;
}

bool solve(void) {
  vector<vector<char>> a(13, vector<char>(13));
  for (int i = 0; i < 13; i++)
    for (int j = 0; j < 13; j++) cin >> a[i][j];

  for (int i = 0; i < 9; i++) {
    unordered_set<char> s;
    for (int j = 0; j < 9; j++) {
      char c = a[calc(i)][calc(j)];
      if (c == '.') continue;
      if (s.find(c) != s.end()) return false;
      s.insert(c);
    }
  }

  for (int i = 0; i < 9; i++) {
    unordered_set<char> s;
    for (int j = 0; j < 9; j++) {
      char c = a[calc(j)][calc(i)];
      if (c == '.') continue;
      if (s.find(c) != s.end()) return false;
      s.insert(c);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      unordered_set<char> s;
      for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 3; l++) {
          char c = a[calc(i * 3 + k)][calc(j * 3 + l)];
          if (c == '.') continue;
          if (s.find(c) != s.end()) return false;
          s.insert(c);
        }
      }
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "OK" : "GRESKA");
  return 0;
}
