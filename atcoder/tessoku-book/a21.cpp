#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> p(n+1), a(n+1);
  for (int i = 1; i <= n; ++i) cin >> p[i] >> a[i];

  vector dp(n+1, vector<int> (n+1));

  dp[1][n] = 0;
  for (int len = n - 2; len >= 0; len--) {
    for (int l = 1; l <= n - len; l++) {
      int r = l + len;

      int s1 = 0;
      if (l <= p[l-1] && p[l-1] <= r) s1 = a[l-1];

      int s2 = 0;
      if (l <= p[r+1] && p[r+1] <= r) s2 = a[r+1];

      if (l == 1) dp[l][r] = dp[l][r+1] + s2;
      else if (r == n) dp[l][r] = dp[l-1][r] + s1;
      else dp[l][r] = max(dp[l-1][r] + s1, dp[l][r+1] + s2);
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) ans = max(ans, dp[i][i]);
  cout << ans << endl;
  return 0;
}
