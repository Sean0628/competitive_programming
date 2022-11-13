#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const double INF = 1e9;

int main() {
  int n; cin >> n;
  vector<int> x(n), y(n);
  rep(i,n) cin >> x[i] >> y[i];

  vector dp(1<<n, vector<double> (n, INF));

  dp[0][0] = 0;
  rep(i, 1<<n) {
    rep(j, n) {
      if (dp[i][j] >= INF) continue;

      rep(k, n) {
        if ((i / (1<<k)) % 2 == 1) continue;

        double dist = sqrt(1.0*(x[j]-x[k])*(x[j]-x[k]) + 1.0*(y[j]-y[k])*(y[j]-y[k]));
        dp[i+(1<<k)][k] = min(dp[i+(1<<k)][k], dp[i][j] + dist);
      }
    }
  }

  printf("%.12lf\n", dp[(1<<n)-1][0]);

  return 0;
}
