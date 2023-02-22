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
  int n, k; cin >> n >> k;
  vector a(2, vector<int> (n));
  rep(i, 2) rep(j, n) cin >> a[i][j];

  vector dp(n, vector<bool> (2));

  dp[0][0] = dp[0][1] = true;

  for (int i = 1; i < n; ++i) {
    rep(j, 2) {
      int pi = i-1;
      rep(pj, 2) {
        if (!dp[pi][pj]) continue;
        if (abs(a[pj][pi] - a[j][i]) > k) continue;

        dp[i][j] = true;
      }
    }
  }

  bool ok = false;
  rep(j, 2) if (dp[n-1][j]) ok = true;
  cyn(ok);
  return 0;
}
