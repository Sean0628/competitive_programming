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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;

  vector<int> dp(n+1);

  for (int i = 1; i <= n; ++i) {
    dp[i] = INT_MAX;

    {
      int p = 1;
      while (p <= i) {
        dp[i] = min(dp[i], dp[i-p]+1);
        p *= 6;
      }
    }
    {
      int p = 1;
      while (p <= i) {
        dp[i] = min(dp[i], dp[i-p]+1);
        p *= 9;
      }
    }
  }

  out(dp[n]);
  return 0;
}
