#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);

  for (int i = 1; i < n; ++i) cin >> a[i];
  for (int i = 2; i < n; ++i) cin >> b[i];

  vector<int> dp(n+1, INT_MAX);

  dp[0] = 0;
  rep(i, n-1) {
    dp[i+1] = min(dp[i+1], dp[i]+a[i+1]);
    if (i+2 < n) dp[i+2] = min(dp[i+2], dp[i]+b[i+2]);
  }
  cout << dp[n-1] << endl;
  return 0;
}
