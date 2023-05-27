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
  int n; cin >> n;
  vector<P> a(n);
  rep(i, n) {
    int x, y; cin >> x >> y;
    a[i] = P(x, y);
  }

  vector<vector<double>> dp(1<<n, vector<double>(n, INF));
  dp[0][0] = 0;

  rep(i, 1<<n) {
    rep(j, n) {
      if (dp[i][j] == INF) continue;

      rep(k, n) {
        if (i>>k&1) continue;

        double x = a[j].first - a[k].first;
        double y = a[j].second - a[k].second;
        double dist = sqrt(x*x + y*y);
        dp[i+(1<<k)][k] = min(dp[i+(1<<k)][k], dp[i][j] + dist);
      }
    }
  }

  printf("%.10f\n", dp[(1<<n)-1][0]);

  return 0;
}
