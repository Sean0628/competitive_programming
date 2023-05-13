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
  int n; cin >> n;
  vector<bool> op(n);
  rep(i, n) {
    string s; cin >> s;
    if (s == "AND") op[i] = true;
    else op[i] = false;
  }

  vector<vector<ll>> dp(n+1, vector<ll>(2));

  dp[0][0] = 1;
  dp[0][1] = 1;
  rep(i, n) {
    if (op[i]) {
      dp[i+1][0] = dp[i][0]*2 + dp[i][1];
      dp[i+1][1] = dp[i][1];
    } else {
      dp[i+1][0] = dp[i][0];
      dp[i+1][1] = dp[i][0] + dp[i][1]*2;
    }
  }

  out(dp[n][1]);
  return 0;
}
