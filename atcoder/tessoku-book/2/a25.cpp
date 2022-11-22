#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector<string> c(h);
  rep(i, h) cin >> c[i];

  vector dp(h, vector<ll> (w));
  rep(i, h) rep(j, w) {
    if (i == 0 && j == 0) dp[i][j] = 1;
    else {
      dp[i][j] = 0;
      if (i > 0 && c[i-1][j] == '.') dp[i][j] += dp[i-1][j];
      if (j > 0 && c[i][j-1] == '.') dp[i][j] += dp[i][j-1];
    }
  }

  cout << dp[h-1][w-1] << endl;

  return 0;
}
