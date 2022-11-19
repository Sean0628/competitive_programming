#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, W; cin >> N >> W;
  vector<int> w(N), v(N);
  rep(i, N) cin >> w[i] >> v[i];
  vector dp(N+1, vector<ll> (10'001, INT_MAX));

  dp[0][0] = 0;
  for (int i = 1; i <= N; ++i) {
    for (int j = 0; j <= 10'000; ++j) {
      if (j < v[i-1]) dp[i][j] = dp[i-1][j];
      else dp[i][j] = min(dp[i-1][j], dp[i-1][j - v[i-1]] + w[i-1]);
    }
  }

  ll ans = 0;
  rep(i, 10'001) if (dp[N][i] <= W) ans = i;
  cout << ans << endl;

  return 0;
}
