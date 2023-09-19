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
  vector<int> a(n); rep(i, n) cin >> a[i];

  vector<vector<ll>> dp(n, vector<ll>(21, 0));
  dp[0][a[0]] = 1;

  for (int i = 1; i <= n-2; ++i) {
    for (int j = 0; j <= 20; ++j) {
      if (j - a[i] >= 0) dp[i][j] += dp[i - 1][j - a[i]];
      if (j + a[i] <= 20) dp[i][j] += dp[i - 1][j + a[i]];
    }
    for (int j = 0; j <= 20; ++j) cout << dp[i][j] << " ";
    cout << endl;
  }

  out(dp[n - 2][a[n - 1]]);

  return 0;
}
