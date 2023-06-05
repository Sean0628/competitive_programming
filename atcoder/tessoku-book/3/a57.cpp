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
  int n, q; cin >> n >> q;
  vector<int> a(n), x(q), y(q);
  rep(i, n) cin >> a[i];
  rep(i, q) cin >> x[i] >> y[i];

  // doubling
  vector dp(30, vector<int>(n+1, 0));
  rep(i, n) dp[0][i+1] = a[i];

  rep(d, 30) {
    if (d == 0) continue;

    rep(i, n) {
      int next = dp[d-1][i+1];
      dp[d][i+1] = dp[d-1][next];
    }
  }

  // process queries
  rep(i, q) {
    int ans = x[i];
    int d = y[i];

    for (int j = 0; d > 0; j++) {
      if (d & 1) ans = dp[j][ans];
      d >>= 1;
    }

    out(ans);
  }

  return 0;
}
