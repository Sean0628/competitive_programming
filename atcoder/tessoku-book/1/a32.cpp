#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, a, b; cin >> n >> a >> b;

  vector<bool> dp(n+1, false);

  rep(i, n+1) {
    if (i >= a && !dp[i-a]) dp[i] = true;
    else if (i >= b && !dp[i-b]) dp[i] = true;
  }

  string ans = "First";
  if (!dp[n]) ans = "Second";

  cout << ans << endl;
  return 0;
}
