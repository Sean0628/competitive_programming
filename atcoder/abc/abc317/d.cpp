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

const ll INF = 1e18;

int main() {
  int n; cin >> n;

  int w = 0;
  vector<P> v;
  rep(i, n) {
    int x, y, z; cin >> x >> y >> z;
    int a = max(0, (y-x+1)/2);
    w += z;
    v.push_back({a, z*2});
  }

  vector dp(n+1, vector<ll>(w+1, INF));
  dp[0][0] = 0;

  rep(i, n) {
    auto [a, z] = v[i];

    rep(j, w+1) {
      chmin(dp[i+1][j], dp[i][j]);
      chmin(dp[i+1][min(w, j+z)], dp[i][j]+a);
    }
  }

  ll ans = dp[n][w];
  out(ans);
  return 0;
}
