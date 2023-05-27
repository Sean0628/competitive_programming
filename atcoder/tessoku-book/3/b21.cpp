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
  int n; cin >> n;
  string s; cin >> s;

  vector dp(n+1, vector<int> (n+1));
  for (int i = 1; i <= n; ++i) dp[i][i] = 1;

  for (int len = 2; len <= n; ++len) {
    for (int l = 1; l < n; ++l) {
      int r = l + len - 1;
      if (r > n) continue;

      if (s[l-1] == s[r-1]) chmax(dp[l][r], dp[l+1][r-1] + 2);
      else chmax(dp[l][r], max(dp[l+1][r], dp[l][r-1]));
    }
  }

  out(dp[1][n]);
  return 0;
}
