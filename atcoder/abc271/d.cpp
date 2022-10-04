#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, s; cin >> n >> s;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  vector dp(n+1, vector<bool>(s+1));
  dp[0][0] = true;

  rep(i, n) {
    rep(j, s+1) if (dp[i][j]) {
      if (j+a[i] <= s) dp[i+1][j+a[i]] = true;
      if (j+b[i] <= s) dp[i+1][j+b[i]] = true;
    }
  }

  if (!dp[n][s]) { cout << "No" << endl; return 0; };

  string ans;
  for (int i = n-1; i >= 0; i--) {
    if (s-a[i] >= 0 && dp[i][s-a[i]]) {
      s -= a[i];
      ans += 'H';
    } else {
      s -= b[i];
      ans += 'T';
    }
  }

  reverse(ans.begin(), ans.end());
  cout << "Yes" << endl;
  cout << ans << endl;
  return 0;
}
