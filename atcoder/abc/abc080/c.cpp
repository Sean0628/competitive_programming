#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> f(n);

  rep(i, n) {
    for (int j = 1; j <= 10; ++j) {
      int c; cin >> c;
      f[i] += c * pow(2, 10-j);
    }
  }

  vector p(n, vector<int>(11));
  rep(i, n) rep(j, 11) cin >> p[i][j];
  ll ans = INT_MIN;

  rep(i, 1<<10) {
    if (i == 0) continue;
    ll tot = 0;
    rep(j, n) {
      int m = __builtin_popcount(f[j] & i);
      tot += p[j][m];
    }
    ans = max(ans, tot);
  }

  out(ans);
  return 0;
}
