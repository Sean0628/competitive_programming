#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

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
  vector<int> p(n); rep(i, n) cin >> p[i];

  // dp[i][j] := 残り [i, j] の状態から始めたときの最大値
  vector<vector<ll>> dp(n, vector<ll>(n, 0));

  rep(len, n) {
    rep(i, n) {
      int j = (i + len)%n;

      if ((n-len+1)%2 == 0) {
        dp[i][j] = max(p[i] + dp[(i+1)%n][j], p[j] + dp[i][(j+n-1)%n]);
      } else {
        if (p[i] > p[j]) {
          dp[i][j] = dp[(i+1)%n][j];
        } else {
          dp[i][j] = dp[i][(j+n-1)%n];
        }
      }
    }
  }

  ll ans = 0;
  rep(i, n) chmax(ans, dp[i][(i+n-1)%n]);

  out(ans);

  return 0;
}
