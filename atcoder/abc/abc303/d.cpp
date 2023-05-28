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
  int x, y, z; cin >> x >> y >> z;
  string s; cin >> s;
  int n = s.size();
  vector<vector<ll>> dp(n+1, vector<ll>(2, 1e18));
  dp[0][0] = 0;

  for (int i = 1; i <= n; ++i) {
    rep(c, 2) {
      int A = s[i-1] == 'A';
      rep(nc, 2) {
        ll cost = (A == nc) ? x : y;
        if (c != nc) cost += z;
        chmin(dp[i][nc], dp[i-1][c] + cost);
      }
    }
  }

  ll ans = min(dp[n][0], dp[n][1]);
  out(ans);
  return 0;
}
