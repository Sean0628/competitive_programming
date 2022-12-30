#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int mod = 1e9 + 7;
int main() {
  int n, l; cin >> n >> l;

  vector<int> dp(n+1);

  dp[0] = 1;

  for (int i = 1; i <= n; ++i) {
    if (i < l) dp[i] = dp[i-1];
    else dp[i] = (dp[i-1] + dp[i-l]) % mod;
  }
  cout << dp[n] << endl;
  return 0;
}
