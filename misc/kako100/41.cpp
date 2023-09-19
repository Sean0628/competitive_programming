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
  int d, n; cin >> d >> n;
  vector<int> t(d); rep(i, d) cin >> t[i];
  vector<int> a(n), b(n), c(n); rep(i, n) cin >> a[i] >> b[i] >> c[i];

  vector dp(d+1, vector<int> (n, -1));
  rep(i, n) if (a[i] <= t[0] && t[0] <= b[i]) dp[0][i] = 0;

  rep(i, d-1) {
    rep(j, n) {
      if (dp[i][j] != -1) {
        rep(k, n) {
          if (a[k] <= t[i+1] && t[i+1] <= b[k]) chmax(dp[i+1][k], dp[i][j] + abs(c[j] - c[k]));
        }
      }
    }
  }

  int ans = 0;
  rep(i, n) chmax(ans, dp[d-1][i]);

  out(ans);

  return 0;
}
