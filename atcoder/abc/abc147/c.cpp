#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n);

  vector<vector<int>> to(n, vector<int> (n, -1));

  rep(i, n) {
    cin >> a[i];

    rep(j, a[i]) {
      int x, y; cin >> x >> y;
      x--;
      to[i][x] = y;
    }
  }

  int ans = 0;
  rep(i, 1<<n) {
    vector<int> d(n);
    rep(j, n) {
      if (i>>j&1) d[j] = 1;
    }
    bool ok = true;
    rep(j, n) {
      if (!d[j]) continue;

      rep(k, n) {
        if (to[j][k] == -1) continue;
        if (to[j][k] != d[k]) ok = false;
      }
    }

    if (ok) ans = max(ans, __builtin_popcount(i));
  }

  cout << ans << endl;
  return 0;
}
