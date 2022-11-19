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

  vector<int> ans;
  int i = n, j = s;
  if (dp[i][j]) {
    while (i > 0) {
      if (j >= a[i-1] && dp[i-1][j-a[i-1]]) {
        ans.emplace_back(i);
        j -= a[i-1];
        i--;
      } else if (dp[i-1][j]) i--;
    }
  } else {
    cout << -1 << endl;
    return 0;
  }

  reverse(ans.begin(), ans.end());

  cout << ans.size() << endl;
  for (auto e : ans) cout << e << " ";
  cout << endl;
  return 0;
}
