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
  vector<string> s(5); rep(i, 5) cin >> s[i];
  // dp[i][j] = i 列目を j にするときの最小コスト

  vector<vector<int>> dp(n+1, vector<int> (3, INF));
  rep(i, 3) dp[0][i] = 0;

  for (int i = 1; i <= n; ++i) {
    vector<int> cnt(3, 0); // 0: W, 1: B, 2: R
    rep(j, 5) {
      if (s[j][i-1] == 'W') cnt[0]++;
      else if (s[j][i-1] == 'B') cnt[1]++;
      else if (s[j][i-1] == 'R') cnt[2]++;
    }

    rep(k, 3) {
      rep(l, 3) {
        if (k == l) continue;

        chmin(dp[i][k], dp[i-1][l] + 5 - cnt[k]);
      }
    }
  }

  int ans = INF;
  rep(i, 3) chmin(ans, dp[n][i]);

  out(ans);
  return 0;
}
