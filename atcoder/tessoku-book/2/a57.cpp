#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;
  vector<int> a(n), x(q), y(q);
  rep(i, n) cin >> a[i];
  rep(i, q) cin >> x[i] >> y[i];

  vector dp(31, vector<int> (n+1));
  for (int i = 1; i <= n; ++i) dp[0][i] = a[i-1];
  rep(d, 30) {
    if (d == 0) continue;

    for (int i = 1; i <= n; ++i) {
      dp[d][i] = dp[d-1][dp[d-1][i]];
    }
  }

  rep(i, q) {
    int cur = x[i];

    for (int d = 29; d >= 0; --d) {
      if ((y[i] / (1 << d)) % 2 != 0) cur = dp[d][cur];
    }

    cout << cur << endl;
  }

  return 0;
}
