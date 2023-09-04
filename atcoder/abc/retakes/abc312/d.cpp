#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint998244353;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const ll INF = 1e18;

int main() {
  string s; cin >> s;
  int n = s.size();

  vector dp(n+1, vector<mint> (n+1, 0));
  dp[0][0] = 1;

  rep(i, n) {
    rep(j, n) {
      if (s[i] != ')') dp[i+1][j+1] += dp[i][j];
      if (s[i] != '(' && j > 0) dp[i+1][j-1] += dp[i][j];
    }
  }

  out(dp[n][0].val());
  return 0;
}
