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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int r, c; cin >> r >> c;
  vector<vector<int>> a(r, vector<int>(c));
  rep(i, r) rep(j, c) cin >> a[i][j];

  ll ans = 0;
  rep(k, 1<<r) {
    ll ret = 0;
    rep(j, c) {
      ll sub = 0;

      rep(i, r) {
        if (k & (1<<i)) {
          if (a[i][j] == 0) sub++;
        } else {
          if (a[i][j] == 1) sub++;
        }
      }

      ret += max(sub, r-sub);
    }

    chmax(ans, ret);
  }

  out(ans);
  return 0;
}
