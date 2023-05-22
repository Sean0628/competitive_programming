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
  int n; cin >> n;
  vector<int> p(n+1), a(n+1);
  for (int i = 1; i <= n; ++i) cin >> p[i] >> a[i];

  vector dp(n+1, vector<int>(n+1, 0));
  dp[1][n] = 0;

  for (int len = n - 2; len >= 0; len--) {
    for (int l = 1; l + len <= n; l++) {
      int r = l + len;

      int score1 = 0;
      if (l <= p[l-1] && p[l-1] <= r) score1 = a[l-1];

      int score2 = 0;
      if (l <= p[r+1] && p[r+1] <= r) score2 = a[r+1];

      if (l == 1) dp[l][r] = dp[l][r+1] + score2;
      else if (r == n) dp[l][r] = dp[l-1][r] + score1;
      else dp[l][r] = max(dp[l-1][r] + score1, dp[l][r+1] + score2);
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) chmax(ans, dp[i][i]);

  out(ans);

  return 0;
}
