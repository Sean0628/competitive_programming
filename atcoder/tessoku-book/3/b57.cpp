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
  int n, k; cin >> n >> k;

  auto sumDigits = [](int x) {
    int res = 0;
    while (x > 0) {
      res += x % 10;
      x /= 10;
    }
    return res;
  };

  // doubling
  vector dp(30, vector(n+1, 0));
  for (int i = 1; i <= n; ++i) dp[0][i] = i - sumDigits(i);

  rep(d, 30) {
    if (d == 0) continue;

    for (int i = 1; i <= n; ++i) dp[d][i] = dp[d-1][dp[d-1][i]];
  }

  // process queries
  for (int i = 1; i <= n; ++i) {
    int curr = i;

    rep(d, 30) {
      if (k & (1 << d)) curr = dp[d][curr];
    }
    out(curr);
  }
  return 0;
}
