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
  int ns = s.size(), nt = t.size();
  vector<vector<int>> dp(ns+1, vector<int>(nt+1, 1e9));

  rep(i, ns+1) rep(j, nt+1) {
    if (i == 0) dp[i][j] = j;
    else if (j == 0) dp[i][j] = i;
    else if (s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1];
    else chmin(dp[i][j], 1 + min({ dp[i-1][j], dp[i][j-1], dp[i-1][j-1] }));
  }

  out(dp[ns][nt]);
  return 0;
}
