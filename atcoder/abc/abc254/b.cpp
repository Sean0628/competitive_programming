#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int> (n));

  rep(i, n) {
    rep(j, i + 1) {
      if (j == 0 || i == j) a[i][j] = 1;
      else a[i][j] = a[i-1][j-1] + a[i-1][j];
    }
  }

  rep(i, n) {
    rep(j, i + 1) {
      cout << a[i][j];
      if (j != i) cout << " ";
      else cout << endl;
    }
  }

  return 0;
}
