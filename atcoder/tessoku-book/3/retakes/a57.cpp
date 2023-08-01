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
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }

  vector<int> x(q), y(q);
  rep(i, q) cin >> x[i] >> y[i];

  // doubling
  vector dp(30, vector<int> (n));

  rep(i, n) dp[0][i] = a[i];

  rep(i, 30) {
    if (i == 0) continue;

    rep(j, n) dp[i][j] = dp[i-1][dp[i-1][j]];
  }

  rep(i, q) {
    ll ans = x[i]-1;
    int tmp = y[i];
    rep(j, 30) {
      if (tmp & (1 << j)) {
        ans = dp[j][ans];
      }
    }
    out(ans+1);
  }
  return 0;
}
