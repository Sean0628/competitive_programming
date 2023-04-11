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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> dp(n, 1e9);
  dp[0] = 0;
  for (int i = 1; i < n; ++i) {
    dp[i] = min(dp[i-1] + abs(a[i] - a[i-1]), dp[i]);
    if (i-2 >= 0) dp[i] = min(dp[i-2] + abs(a[i] - a[i-2]), dp[i]);
  }

  out(dp[n-1]);
  return 0;
}
