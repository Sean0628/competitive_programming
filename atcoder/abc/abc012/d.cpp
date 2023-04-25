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
  int n, m; cin >> n >> m;
  vector c(n, vector<ll> (n, 1e9));

  rep(i, n) c[i][i] = 0;

  rep(i, m) {
    int a, b, t; cin >> a >> b >> t;
    a--; b--;
    c[a][b] = t;
    c[b][a] = t;
  }

  rep(k, n) rep(i, n) rep(j, n) {
    c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
  }

  ll mn_mx_c = 1e9;
  rep(i, n) {
    ll mx = 0;
    rep(j, n) chmax(mx, c[i][j]);
    chmin(mn_mx_c, mx);
  }

  out(mn_mx_c);
  return 0;
}
