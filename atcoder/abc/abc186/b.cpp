#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));

  int m = 101;
  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
      m = min(m, a[i][j]);
    }
  }

  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      if (a[i][j] > m) ans += (a[i][j] - m);
    }
  }

  cout << ans << endl;

  return 0;
}
