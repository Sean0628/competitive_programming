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
  int h, w; cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector<vector<ll>> dp(h, vector<ll>(w));

  rep(i, h) {
    rep(j, w) {
      if (s[i][j] == '#') dp[i][j] = 0;
      else {
        if (i == 0 && j == 0) dp[i][j] = 1;
        else if (i == 0) dp[i][j] = dp[i][j-1];
        else if (j == 0) dp[i][j] = dp[i-1][j];
        else dp[i][j] = dp[i-1][j] + dp[i][j-1];
      }
    }
  }

  out(dp[h-1][w-1]);
  return 0;
}
