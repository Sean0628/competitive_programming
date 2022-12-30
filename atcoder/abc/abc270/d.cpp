#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(k);
  rep(i, k) cin >> a[i];
  vector dp(2, vector<int>(n+1));
  for (int j = 1; j <= n; j++) {
    {
      int now = 0;
      for (int x : a) {
        if (x <= j) now = max(now, dp[1][j-x]+x);
      }
      dp[0][j] = now;
    }
    {
      int now = INT_MAX;
      for (int x : a) {
        if (x <= j) now = min(now, dp[0][j-x]);
      }
      dp[1][j] = now;
    }
  }
  cout << dp[0][n] << endl;
  return 0;
}
