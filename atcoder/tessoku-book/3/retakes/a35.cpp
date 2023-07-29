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
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<vector<int>> dp(n, vector<int>(n, 0));
  rep(i, n) dp[n-1][i] = a[i];

  for (int i = n-2; i >= 0; --i) {
    for (int j = 0; j <= i; ++j) {
      if (i%2 == 0) dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]);
      else dp[i][j] = min(dp[i+1][j], dp[i+1][j+1]);
    }
  }

  out(dp[0][0]);
  return 0;
}
