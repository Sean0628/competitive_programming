#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector a(m, vector<int> (n));
  rep(i, m) rep(j, n) cin >> a[i][j];

  vector dp(m+1, vector<int> (1<<n, INF));

  dp[0][0] = 0;
  for (int i = 1; i <= m; ++i) {
    rep(j, 1<<n) {
      vector<int> free(n);
      rep(k, n) {
        if (j & (1<<k)) free[k] = 1;
        else free[k] = 0;
      }

      int v = 0;
      rep(k, n) {
        if (free[k] || a[i-1][k]) v += (1<<k);
      }

      dp[i][j] = min(dp[i][j], dp[i-1][j]);
      dp[i][v] = min(dp[i][v], dp[i-1][j]+1);
    }
  }

  int ans = -1;
  if (dp[m][(1<<n)-1] != INF) ans = dp[m][(1<<n)-1];

  cout << ans << endl;
  return 0;
}
