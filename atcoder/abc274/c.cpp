#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n+1);
  vector dp(2*n+1, 0);

  for (int i = 1; i <= n; ++i) {
    cin >> a[i];

    dp[i*2-1] = dp[a[i]-1] + 1;
    dp[i*2] = dp[a[i]-1] + 1;
  }

  rep(i, 2*n+1) cout << dp[i] << endl;
  return 0;
}

