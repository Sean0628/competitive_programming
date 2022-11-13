#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, s; cin >> n >> s;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector dp(n+1, vector<bool> (s+1, false));
  dp[0][0] = true;

  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j <= s; ++j) {
      if (j < a[i-1]) {
        if (dp[i-1][j]) dp[i][j] = true;
      } else {
        if (dp[i-1][j] || dp[i-1][j-a[i-1]]) dp[i][j] = true;
      }
    }
  }

  if (!dp[n][s]) {
    cout << -1 << endl;
    return 0;
  }

  int in = n, is = s;
  vector<int> ans;
  while (in > 0) {

    if (is >= a[in-1] && dp[in-1][is-a[in-1]]) {
      ans.emplace_back(in);
      is -= a[in-1];
      in--;
    } else if (dp[in-1][is]) {
      in--;
    }
  }

  reverse(ans.begin(), ans.end());

  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;

  return 0;
}
