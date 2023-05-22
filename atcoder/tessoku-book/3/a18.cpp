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
  int n, s; cin >> n >> s;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<vector<bool>> dp(n+1, vector<bool>(s+1, false));
  dp[0][0] = true;

  for (int i = 1; i <= n; ++i) {
    rep(j, s+1) {
      if (j == 0) { dp[i][j] = true; continue; }

      if (j - a[i-1] >= 0) {
        dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
      } else {
        dp[i][j] = dp[i-1][j];
      }
    }
  }

  cyn(dp[n][s]);
  return 0;
}
