#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
using mint9 = modint998244353;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<vector<mint9>> dp(n, vector<mint9>(9, 0));
  dp[0][a[0]] = 1;
  for (int i = 1; i < n; ++i) {
    rep(j, 10) {
      dp[i][(j+a[i])%10] += dp[i-1][j];
      dp[i][(j*a[i])%10] += dp[i-1][j];
    }
  }

  rep(i, 10) out(dp[n-1][i].val());
  return 0;
}
