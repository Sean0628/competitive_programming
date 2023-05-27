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

const int LIM = 1e5;

int main() {
  int n, W; cin >> n >> W;
  vector<int> w(n), v(n);
  rep(i, n) cin >> w[i] >> v[i];

  vector dp(n+1, vector<ll>(LIM+1, INT_MAX));
  dp[0][0] = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= LIM; j++) {
      if (j < v[i-1]) dp[i][j] = dp[i-1][j];
      else dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i-1]] + w[i-1]);
    }
  }

  int ans = 0;
  for (int i = 0; i <= LIM; i++) if (dp[n][i] <= W) ans = i;

  out(ans);

  return 0;
}
