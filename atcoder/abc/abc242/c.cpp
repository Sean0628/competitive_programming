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

const int mod = 998244353;

int main() {
  int n; cin >> n;

  vector<vector<int>> dp(n+1, vector<int>(10, 0));

  for (int i = 1; i <= 9; ++i) dp[1][i] = 1;

  for (int d = 2; d <= n; ++d) {
    for (int i = 1; i <= 9; ++i) {
      for (int j = max(1, i-1); j <= min(9, i+1); ++j) {
        dp[d][j] += dp[d-1][i];
        dp[d][j] %= mod;
      }
    }
  }

  int cnt = 0;
  for (int i = 1; i <= 9; ++i) {
    cnt += dp[n][i];
    cnt %= mod;
  }

  out(cnt);
  return 0;
}
