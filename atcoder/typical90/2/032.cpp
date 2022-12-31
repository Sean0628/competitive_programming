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
  vector b(n, vector<bool> (n));

  vector<int> c(n);
  rep(i, n) c[i] = i;

  rep(i, n) rep(j, n) cin >> a[i][j];
  int m; cin >> m;
  rep(i, m) {
    int x, y; cin >> x >> y;
    x--, y--;
    b[x][y] = true;
    b[y][x] = true;
  }


  int ans = INT_MAX;
  do {
    int tot = 0;
    rep(i, n) {
      if (i > 0 && b[c[i]][c[i-1]]) {
        tot = INT_MAX;
        break;
      }

      tot += a[c[i]][i];
    }

    ans = min(tot, ans);
  } while (next_permutation(c.begin(), c.end()));

  if (ans == INT_MAX) cout << -1 << endl;
  else cout << ans << endl;
  return 0;
}
