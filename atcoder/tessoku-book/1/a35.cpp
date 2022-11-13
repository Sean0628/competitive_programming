#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector dp(n, vector<int> (n));
  rep(j, n) dp[n-1][j] = a[j];

  for (int i = n - 2; i >= 0; --i) {
    for (int j = 0; j <= i; ++j) {
      if (i % 2 == 0) dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]);
      if (i % 2 == 1) dp[i][j] = min(dp[i+1][j], dp[i+1][j+1]);
    }
  }

  cout << dp[0][0] << endl;
  return 0;
}
