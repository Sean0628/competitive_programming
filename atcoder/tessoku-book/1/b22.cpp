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
  rep(i, n-1) cin >> a[i];
  rep(i, n-2) cin >> b[i];

  vector<int> dp(n+1, INT_MAX);
  dp[0] = 0;
  rep(i, n) {
    if (i < n-1) dp[i+1] = min(dp[i]+a[i], dp[i+1]);
    if (i < n-2) dp[i+2] = min(dp[i]+b[i], dp[i+2]);
  }

  cout << dp[n-1] << endl;
  return 0;
}
