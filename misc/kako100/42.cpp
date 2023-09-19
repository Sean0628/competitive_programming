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

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<int> d(n); rep(i, n) cin >> d[i];
  vector<int> c(m); rep(i, m) cin >> c[i];

  // dp[i][j] = i日目に j にいるときの最小コスト
  vector<vector<int>> dp(m+1, vector<int>(n+1, INF));
  dp[0][0] = 0;

  rep(i, m+1) {
    if (i == 0) continue;

    rep(j, n) {
      if (dp[i-1][j] != -1) {
        chmin(dp[i][j], dp[i-1][j]);
        chmin(dp[i][j+1], dp[i-1][j] + d[j] * c[i-1]);
      }
    }
  }

  int ans = INF;
  rep(i, m+1) chmin(ans, dp[i][n]);

  out(ans);

  return 0;
}
