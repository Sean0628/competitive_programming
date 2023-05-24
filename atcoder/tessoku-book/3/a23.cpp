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

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector a(m, vector(n, 0));
  rep(i, m) rep(j, n) cin >> a[i][j];

  vector dp(m+1, vector(1<<n, INF));
  dp[0][0] = 0;

  rep(i, m) rep(s, 1<<n) {
    chmin(dp[i+1][s], dp[i][s]);

    int ns = s;
    rep(j, n) if (a[i][j]) ns |= 1<<j;

    chmin(dp[i+1][ns], dp[i][s] + 1);
  }

  int ans = dp[m][(1<<n)-1];
  if (ans == INF) ans = -1;

  out(ans);
  return 0;
}
