#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<char, char>;

int main() {
  int n; cin >> n;
  vector<vector<char>> a(n, vector<char> (n));

  rep(i, n) rep(j, n) cin >> a[i][j];

  bool v = true;
  rep(i, n) {
    rep(j, n) {
      if (i == j) break;

      char x = a[i][j], y;
      if (x == 'W') y = 'L';
      else if (x == 'L') y = 'W';
      else y = 'D';

      if (a[j][i] != y) v = false;
    }
  }

  cout << (v ? "correct" : "incorrect") << endl;

  return 0;
}
