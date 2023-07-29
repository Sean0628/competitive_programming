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
  int x, y, z; cin >> x >> y >> z;
  string s; cin >> s;
  int n = s.size();

  // dp[0][i]: OFF
  // dp[1][i]: ON
  vector dp(2, vector<ll> (n+1, 1e18));
  dp[0][0] = 0;

  for (int i = 1; i <= n; ++i) {
    if (s[i-1] == 'A') {
      dp[0][i] = min(dp[0][i-1] + y, dp[1][i-1] + z + y);
      dp[1][i] = min(dp[0][i-1] + z + x, dp[1][i-1] + x);
    } else {
      dp[0][i] = min(dp[0][i-1] + x, dp[1][i-1] + z + x);
      dp[1][i] = min(dp[0][i-1] + z + y, dp[1][i-1] + y);
    }
  }

  out(min(dp[0][n], dp[1][n]));
  return 0;
}
