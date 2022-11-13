#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int lp(string s1, string s2) {
  int m = s1.size();
  int n = s2.size();
  vector dp(m+1, vector<int> (n+1));

  rep(i, m+1) rep(j, n+1) {
    if (i == 0) dp[i][j] = j;
    else if (j == 0) dp[i][j] = i;
    else if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
    else dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
  }

  return dp[m][n];
}

int main() {
  string s, t; cin >> s >> t;
  cout << lp(s, t) << endl;
  return 0;
}
