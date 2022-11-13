#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t; cin >> s >> t;
  int ss = s.size(), ts = t.size();

  vector dp(ss+1, vector<int> (ts+1));

  dp[0][0] = 0;

  rep(i, ss+1) rep(j, ts+1) {
    if (i > 0 && j > 0 && s[i-1] == t[j-1]) {
      dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+1});
    } else if (i > 0 && j > 0) {
      dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    } else if (i > 0) {
      dp[i][j] = dp[i-1][j];
    } else if (j > 0) {
      dp[i][j] = dp[i][j-1];
    }
  }

  cout << dp[ss][ts] << endl;
  return 0;
}
