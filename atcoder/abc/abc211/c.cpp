#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  string s; cin >> s;
  int n = s.size();

  string t = "chokudai";

  vector<vector<mint>> dp(n+1, vector<mint>(9));

  rep(i, n+1) {
    rep(j, 9) {
      if (j == 0) dp[i][j] = 1;
      else if (i == 0) dp[i][j] = 0;
      else if (s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
      else dp[i][j] = dp[i-1][j];
    }
  }

  out(dp[n][8].val());

  return 0;
}
