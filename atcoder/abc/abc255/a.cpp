#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int r, c; cin >> r >> c;
  vector<vector<int>> a(2, vector<int> (2));

  rep(i, 2) rep(j, 2) cin >> a[i][j];

  cout << a[r-1][c-1] << endl;

  return 0;
}
