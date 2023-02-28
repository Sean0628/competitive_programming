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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  vector dp(n, vector<mint> (2));

  dp[0][0] = dp[0][1] = 1;

  for (int i = 1; i < n; ++i) {
    if (a[i] != a[i-1]) dp[i][0] += dp[i-1][0];
    if (a[i] != b[i-1]) dp[i][0] += dp[i-1][1];
    if (b[i] != a[i-1]) dp[i][1] += dp[i-1][0];
    if (b[i] != b[i-1]) dp[i][1] += dp[i-1][1];
  }

  mint ans = dp[n-1][0]+dp[n-1][1];
  out(ans.val());

  return 0;
}
