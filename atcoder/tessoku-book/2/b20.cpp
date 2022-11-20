#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t; cin >> s >> t;

  auto f = [&]() {
    int ss = s.size(), ts = t.size();
    vector dp(ss+1, vector<int> (ts+1));

    rep(i, ss+1) rep(j, ts+1) {
      if (i == 0) dp[i][j] = j;
      else if (j == 0) dp[i][j] = i;
      else if (s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1];
      else dp[i][j] = 1 + min({ dp[i][j-1], dp[i-1][j], dp[i-1][j-1] });
    }

    return dp[ss][ts];
  };

  cout << f() << endl;
  return 0;
}
