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
  int n, x; cin >> n >> x;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  vector dp(n+1, vector(x+1, false));
  dp[0][0] = true;

  rep(i, n) {
    rep(j, x+1) {
      if (dp[i][j]) {
        if (j+a[i] <= x) dp[i+1][j+a[i]] = true;
        if (j+b[i] <= x) dp[i+1][j+b[i]] = true;
      }
    }
  }

  cyn(dp[n][x]);
  return 0;
}
