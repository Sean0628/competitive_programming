#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n-1), b(n-1);
  rep(i, n-1) cin >> a[i];
  rep(i, n-1) cin >> b[i];

  vector<int> dp(n, 0);

  for (int i = 1; i <= n; ++i) {
    dp[a[i-1]] = max(dp[a[i-1]], dp[i]+100);
    dp[b[i-1]] = max(dp[b[i-1]], dp[i]+150);
  }

  cout << dp[n] << endl;

  return 0;
}
