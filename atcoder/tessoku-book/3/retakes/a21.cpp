#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

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
  int n; cin >> n;
  vector<int> p(n), a(n);
  rep(i, n) {
    cin >> p[i] >> a[i];
    p[i]--;
  }

  // dp[i][j] := 残り [i, j] の状態から始めたときの最大値
  vector<vector<int>> dp(n, vector<int>(n, 0));
  dp[0][n-1] = 0;

  for (int len = n - 2; len >= 0; --len) {
    for (int l = 0; l + len < n; ++l) {
      int r = l + len;

      int s1 = (l <= p[l-1] && p[l-1] <= r) ? a[l-1] : 0;
      int s2 = (l <= p[r+1] && p[r+1] <= r) ? a[r+1] : 0;

      if (l == 0) dp[l][r] = dp[l][r+1] + s2;
      else if (r == n-1) dp[l][r] = dp[l-1][r] + s1;
      else dp[l][r] = max(dp[l-1][r] + s1, dp[l][r+1] + s2);
    }
  }

  ll ans = 0;
  rep(i, n) chmax(ans, dp[i][i]);

  out(ans);
  return 0;
}
