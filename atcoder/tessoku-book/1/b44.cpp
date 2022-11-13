#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector a(n, vector<int> (n));
  rep(i, n) {
    rep(j, n) {
      cin >> a[i][j];
    }
  }

  int q; cin >> q;
  rep(i, q) {
    int c, x, y; cin >> c >> x >> y;
    x--; y--;
    if (c == 1) {
      vector<int> tmp = a[x];
      a[x] = a[y];
      a[y] = tmp;
    } else {
      cout << a[x][y] << endl;
    }
  }
  return 0;
}
