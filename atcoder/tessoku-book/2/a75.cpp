#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> t(n), d(n);
  rep(i, n) cin >> t[i] >> d[i];
  vector<P> p;
  rep(i, n) p.emplace_back(make_pair(d[i], t[i]));
  sort(p.begin(), p.end());
  rep(i, n) {
    d[i] = p[i].first;
    t[i] = p[i].second;
  }

  vector dp(n+1, vector<int> (1441, -1));
  dp[0][0] = 0;
  for (int i = 1; i <= n; ++i) {
    rep(j, 1441) {
      if (j > d[i-1] || j < t[i-1]) dp[i][j] = dp[i-1][j];
      else dp[i][j] = max(dp[i-1][j], dp[i-1][j-t[i-1]] + 1);
    }
  }

  int ans = 0;
  rep(i, 1441) ans = max(ans, dp[n][i]);
  cout << ans << endl;
  return 0;
}
