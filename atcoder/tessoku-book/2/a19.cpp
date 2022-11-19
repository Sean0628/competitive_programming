#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, W; cin >> N >> W;
  vector<ll> w(N), v(N);
  rep(i, N) cin >> w[i] >> v[i];

  vector dp(N+1, vector<ll> (W+1, INT_MIN));

  dp[0][0] = 0;
  for (int i = 1; i <= N; ++i) {
    for (int j = 0; j <= W; ++j) {
      if (j < w[i-1]) dp[i][j] = dp[i-1][j];
      else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i-1]] + v[i-1]);
    }
  }

  ll ans = 0;
  rep(i, W+1) ans = max(ans, dp[N][i]);
  cout << ans << endl;

  return 0;
}
