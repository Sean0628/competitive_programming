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
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  vector<vector<ll>> dp(n+1, vector<ll>(2, -1e18));
  dp[0][0] = 0;

  rep(i, n) {
    chmax(dp[i+1][0], dp[i][0]);
    chmax(dp[i+1][1], dp[i][1]);

    if (x[i] == 0) {
      chmax(dp[i+1][0], dp[i][0] + y[i]);
      chmax(dp[i+1][0], dp[i][1] + y[i]);
    } else {
      chmax(dp[i+1][1], dp[i][0] + y[i]);
    }
  }

  out(max(dp[n][0], dp[n][1]));

  return 0;
}
