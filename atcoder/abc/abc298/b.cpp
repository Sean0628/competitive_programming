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
  vector a(n, vector<int> (n)), b(n, vector<int> (n));

  rep(i, n) rep(j, n) cin >> a[i][j];
  rep(i, n) rep(j, n) cin >> b[i][j];

  bool ok = false;

  auto check = [&](vector<vector<int>>& v) {
    rep(i, n) rep(j, n) {
      if (a[i][j] != 1) continue;
      if (b[i][j] != v[i][j]) return false;
    }
    return true;
  };

  auto rotate = [&](vector<vector<int>>& v) {
    vector<vector<int>> res(n, vector<int> (n));
    rep(i, n) rep(j, n) res[j][n-1-i] = v[i][j];
    return res;
  };

  rep(i, 4) {
    a = rotate(a);
    if (check(a)) ok = true;
  }

  cyn(ok);

  return 0;
}
