#include <iostream>
#include <vector>
using namespace std;

void format(int n) {
  if (n < 10) cout << "  " << n;
  else if (n < 100) cout << " " << n;
  else cout << n;
  cout << " ";
}

void solve(void) {
  vector<vector<int>> v(4, vector<int>(4));
  for (int i = 0; i < 3; i++) {
    cout << i + 1 << "번째 학생의 점수 ";
    cin >> v[i][0] >> v[i][1] >> v[i][2];
  }

  for (int i = 0; i < 3; i++) {
    v[i][3] = v[i][0] + v[i][1] + v[i][2];
    v[3][i] = v[0][i] + v[1][i] + v[2][i];
  }
  v[3][3] = v[3][0] + v[3][1] + v[3][2];

  cout << "     국어 영어 수학 총점\n";
  for (int i = 0; i < 3; i++) {
    cout << " " << i + 1 << "번 ";
    format(v[i][0]);
    format(v[i][1]);
    format(v[i][2]);
    format(v[i][3]);
    cout << "\n";
  }
  cout << "합계 ";
  format(v[3][0]);
  format(v[3][1]);
  format(v[3][2]);
  format(v[3][3]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
