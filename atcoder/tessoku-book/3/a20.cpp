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
  string s, t; cin >> s >> t;
  int n = s.size(), m = t.size();

  // LCS
  vector<vector<int>> dp(n+1, vector<int>(m+1));
  dp[0][0] = 0;

  rep(i, n) {
    rep(j, m) {
      if (s[i] == t[j]) {
        dp[i+1][j+1] = dp[i][j] + 1;
      } else {
        chmax(dp[i+1][j+1], dp[i+1][j]);
        chmax(dp[i+1][j+1], dp[i][j+1]);
      }
    }
  }

  out(dp[n][m]);

  return 0;
}
