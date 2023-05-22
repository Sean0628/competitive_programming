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
  int n, w; cin >> n >> w;
  vector<P> a(n);
  rep(i, n) cin >> a[i].first >> a[i].second;

  vector<vector<ll>> dp(n+1, vector<ll>(w+1, 0));

  rep(i, n) {
    rep(j, w+1) {
      if (j >= a[i].first) {
        chmax(dp[i+1][j], dp[i][j-a[i].first] + a[i].second);
      }
      chmax(dp[i+1][j], dp[i][j]);
    }
  }

  out(dp[n][w]);
  return 0;
}
